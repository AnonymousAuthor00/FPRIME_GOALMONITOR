// ======================================================================
// \title  ByteStreamRecvPortAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for ByteStreamRecv port
// ======================================================================

#ifndef Drv_ByteStreamRecvPortAc_HPP
#define Drv_ByteStreamRecvPortAc_HPP

#include <cstdio>
#include <cstring>

#include "Drv/ByteStreamDriverModel/RecvStatusEnumAc.hpp"
#include "FpConfig.hpp"
#include "Fw/Buffer/Buffer.hpp"
#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Port/InputPortBase.hpp"
#include "Fw/Port/OutputPortBase.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/StringType.hpp"

namespace Drv {

  //! Input ByteStreamRecv port
  class InputByteStreamRecvPort :
    public Fw::InputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Constants
      // ----------------------------------------------------------------------

      enum {
        //! The size of the serial representations of the port arguments
        SERIALIZED_SIZE =
          Fw::Buffer::SERIALIZED_SIZE +
          Drv::RecvStatus::SERIALIZED_SIZE
      };

    public:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The port callback function type
      typedef void (*CompFuncPtr)(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        Fw::Buffer& recvBuffer,
        const Drv::RecvStatus& recvStatus
      );

    public:

      // ----------------------------------------------------------------------
      // Input Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      InputByteStreamRecvPort();

      //! Initialization function
      void init();

      //! Register a component
      void addCallComp(
          Fw::PassiveComponentBase* callComp, //!< The containing component
          CompFuncPtr funcPtr //!< The port callback function
      );

      //! Invoke a port interface
      void invoke(
          Fw::Buffer& recvBuffer,
          const Drv::RecvStatus& recvStatus
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

  //! Output ByteStreamRecv port
  class OutputByteStreamRecvPort :
    public Fw::OutputPortBase
  {

    public:

      // ----------------------------------------------------------------------
      // Output Port Member functions
      // ----------------------------------------------------------------------

      //! Constructor
      OutputByteStreamRecvPort();

      //! Initialization function
      void init();

      //! Register an input port
      void addCallPort(
          InputByteStreamRecvPort* callPort //!< The input port
      );

      //! Invoke a port interface
      void invoke(
          Fw::Buffer& recvBuffer,
          const Drv::RecvStatus& recvStatus
      );

    private:

      // ----------------------------------------------------------------------
      // Member variables
      // ----------------------------------------------------------------------

      //! The pointer to the input port
      InputByteStreamRecvPort* m_port;

  };

}

#endif