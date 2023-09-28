// ======================================================================
// \title  MotionSensor.cpp
// \author fprime
// \brief  cpp file for MotionSensor component implementation class
// ======================================================================


#include <MotionActivatedLight/MotionSensor/MotionSensor.hpp>
#include <FpConfig.hpp>
#include <map>

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
    this->detectionThreshold = 0.0;
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
