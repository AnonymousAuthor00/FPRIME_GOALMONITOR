// ======================================================================
// \title  Light.hpp
// \author fprime
// \brief  hpp file for Light component implementation class
// ======================================================================

#ifndef Light_HPP
#define Light_HPP
#include <map>

#include "MotionActivatedLight/Light/LightComponentAc.hpp"

namespace MotionActivatedLight {

  class Light :
    public LightComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object Light
      //!
      Light(
          const char *const compName /*!< The component name*/
      );

      //! Destroy object Light
      //!
      ~Light();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------
      std::map<int, bool*> mapB;
      std::map<int, float*> mapF;
      bool turnOn;
      F32 currentTime;
      F32 lastDetectionTime;

      void schedIn_handler(
            const NATIVE_INT_TYPE portNum, /*!< The port number*/
            NATIVE_UINT_TYPE context /*!< The call order*/
      );

      void timeIn_handler(
            const NATIVE_INT_TYPE portNum, /*!< The port number*/
            F32 currentTime,
            F32 lastDetectionTime
      );

      //! Handler implementation for varReq5In
      //!
      void varReq5In_handler(
          const NATIVE_INT_TYPE portNum /*!< The port number*/
      );


    };

} // end namespace MotionActivatedLight

#endif
