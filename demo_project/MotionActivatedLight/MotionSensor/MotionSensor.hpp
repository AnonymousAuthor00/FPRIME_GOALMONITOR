// ======================================================================
// \title  MotionSensor.hpp
// \author fprime
// \brief  hpp file for MotionSensor component implementation class
// ======================================================================

#ifndef MotionSensor_HPP
#define MotionSensor_HPP
#include <map>

#include "MotionActivatedLight/MotionSensor/MotionSensorComponentAc.hpp"

namespace MotionActivatedLight {

  class MotionSensor :
    public MotionSensorComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object MotionSensor
      //!
      MotionSensor(
          const char *const compName /*!< The component name*/
      );

      //! Destroy object MotionSensor
      //!
      ~MotionSensor();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------
      std::map<int, bool*> mapB;
      std::map<int, float*> mapF;
      F32 currentTime;
      F32 lastDetectionTime;
      bool detected;
      F32 detectionThreshold;
      F32 targetDistance;

      void schedIn_handler(
            const NATIVE_INT_TYPE portNum, /*!< The port number*/
            NATIVE_UINT_TYPE context /*!< The call order*/
      );

      //! Handler implementation for varReq2In
      //!
      void varReq2In_handler(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );

      //! Handler implementation for varReq4In
      //!
      void varReq4In_handler(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );


    };

} // end namespace MotionActivatedLight

#endif
