// ======================================================================
// \title  MotionSensor.cpp
// \author fprime
// \brief  cpp file for MotionSensor component implementation class
// ======================================================================


#include <MotionActivatedLight/MotionSensor/MotionSensor.hpp>
#include <FpConfig.hpp>
#include <map>
#include <ctime>
#include <chrono>
#include <cmath>

namespace MotionActivatedLight {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  MotionSensor ::
    MotionSensor(
        const char *const compName
    ) : MotionSensorComponentBase(compName)
  {
    this->currentTime = 0.0;
    mapF[3] = &currentTime;
    this->lastDetectionTime = 0.0;
    mapF[2] = &lastDetectionTime;
    this->detected = false;
    mapB[0] = &detected;
    this->detectionThreshold = 10.0;
    mapF[1] = &detectionThreshold;
    this->targetDistance = 0.0;
    mapF[0] = &targetDistance;

  }

  MotionSensor ::
    ~MotionSensor()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void MotionSensor ::
    schedIn_handler(
        const NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< The call order*/
    )
  {
    auto now = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(now);
    std::chrono::duration<double> currentDuration = now.time_since_epoch();
    this->currentTime = currentDuration.count();
    if(std::fmod(this->currentTime, 60.0) >= 30){
        this->targetDistance = 20.0;
    }else{
        this->targetDistance = 0.0;
    }
    if(this->targetDistance>this->detectionThreshold){
        timeOut_out(0, this->currentTime, this->lastDetectionTime);
        this->lastDetectionTime = this->currentTime;
        this->detected = true;
    }else{
        this->detected = false;
    }
  }

  void MotionSensor ::
    varReq2In_handler(
        const NATIVE_INT_TYPE portNum
    )
  {
    // TODO
    BOut_out(0, *(mapB[0]), 0);
    FOut_out(0, *(mapF[1]), 1);
    FOut_out(0, *(mapF[0]), 0);
  }

  void MotionSensor ::
    varReq4In_handler(
        const NATIVE_INT_TYPE portNum
    )
  {
    // TODO
    FOut_out(0, *(mapF[3]), 3);
    FOut_out(0, *(mapF[2]), 2);
    BOut_out(0, *(mapB[0]), 0);
  }

} // end namespace MotionActivatedLight
