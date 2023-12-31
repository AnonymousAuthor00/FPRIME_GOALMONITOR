// ======================================================================
// \title  PortTimePortAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PortTime port
// ======================================================================

#ifndef MotionActivatedLight_PortTimePortAc_HPP
#define MotionActivatedLight_PortTimePortAc_HPP

#include <cstdio>
#include <cstring>

#include "FpConfig.hpp"
#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Port/InputPortBase.hpp"
#include "Fw/Port/OutputPortBase.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/StringType.hpp"

namespace MotionActivatedLight {

  //! Input PortTime port
  class InputPortTimePort :
    public Fw::InputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representations of the port arguments
        SERIALIZED_SIZE =
          sizeof(F32) +
          sizeof(F32)
      };

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The port callback function type
      typedef void (*CompFuncPtr)(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        F32 currentTime,
        F32 lastDetectedTime
      );

    public:

      // ----------------------------------------------------------------------
      // Input Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      InputPortTimePort();

      //! Initialization function
      void init();

      //! Register a component
      void addCallComp(
          Fw::PassiveComponentBase* callComp, //!< The containing component
          CompFuncPtr funcPtr //!< The port callback function
      );

      //! Invoke a port interface
      void invoke(
          F32 currentTime,
          F32 lastDetectedTime
      );

    private:

#if FW_PORT_SERIALIZATION == 1

      //! Invoke the port with serialized arguments
      Fw::SerializeStatus invokeSerial(Fw::SerializeBufferBase& _buffer);

#endif

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The pointer to the port callback function
      CompFuncPtr m_func;

  };

  //! Output PortTime port
  class OutputPortTimePort :
    public Fw::OutputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Output Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      OutputPortTimePort();

      //! Initialization function
      void init();

      //! Register an input port
      void addCallPort(
          InputPortTimePort* callPort //!< The input port
      );

      //! Invoke a port interface
      void invoke(
          F32 currentTime,
          F32 lastDetectedTime
      );

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The pointer to the input port
      InputPortTimePort* m_port;

  };

}

#endif
