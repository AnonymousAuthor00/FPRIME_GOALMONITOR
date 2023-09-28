// ======================================================================
// \title  Light.cpp
// \author fprime
// \brief  cpp file for Light component implementation class
// ======================================================================


#include <MotionActivatedLight/Light/Light.hpp>
#include <FpConfig.hpp>
#include <map>

namespace MotionActivatedLight {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  Light ::
    Light(
        const char *const compName
    ) : LightComponentBase(compName)
  {
    this->turnOn = false;
    mapB[1] = &turnOn;
    this->currentTime = 0.0;
    mapF[3] = &currentTime;
    this->lastDetectionTime = 0.0;
    mapF[2] = &lastDetectionTime;

  }

  Light ::
    ~Light()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------


  void Light ::
    schedIn_handler(
        const NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< The call order*/
    )
  {
    if(this->currentTime-this->lastDetectionTime<5){
        this->turnOn = true;
        this->log_ACTIVITY_HI_LIGHTON();
    }else{
        this->turnOn = false;
        this->log_ACTIVITY_HI_LIGHTOFF();
    }
  }

  void Light ::
    timeIn_handler(
        const NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 currentTime,
        F32 lastDetectionTime
    )
  {
    this->currentTime = currentTime;
    this->lastDetectionTime = lastDetectionTime;
  }

  void Light ::
    varReq5In_handler(
        const NATIVE_INT_TYPE portNum
    )
  {
    // TODO
    BOut_out(0, *(mapB[1]), 1);
    FOut_out(0, *(mapF[3]), 3);
    FOut_out(0, *(mapF[2]), 2);
  }

} // end namespace MotionActivatedLight
