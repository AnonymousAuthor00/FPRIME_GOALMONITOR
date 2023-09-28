// ======================================================================
// \title  GoalMonitorComponentImpl.hpp
// \author fprime
// \brief  hpp file for GoalMonitor component implementation class
// ======================================================================

#ifndef GoalMonitorComponentImpl_HPP
#define GoalMonitorComponentImpl_HPP
#include <map>

#include "example/GoalMonitor/GoalMonitorComponentImpl.hpp"

namespace example {

  class GoalMonitorComponentImpl :
    public GoalMonitorComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object GoalMonitor
      //!
      GoalMonitorComponentImpl(
          const char *const compName /*!< The component name*/
      );

      //! Destroy object GoalMonitor
      //!
      ~GoalMonitorComponentImpl();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------

      std::map<int, bool*> mapB;
      std::map<int, float*> mapF;
      std::map<int, int*> mapU;

      void goalSatisfactionCheck();

      //! Handler implementation for BIn
      //!
      void BIn_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          bool data, 
          U32 number 
      );

      //! Handler implementation for FIn
      //!
      void FIn_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          F32 data, 
          U32 number 
      );

      //! Handler implementation for UIn
      //!
      void UIn_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          U32 data,
          U32 number
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Command handler implementations
      // ----------------------------------------------------------------------

      //! Implementation for monitor command handler
      //! 
      void monitor_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq /*!< The command sequence number*/
      );


    };

} // end namespace example

#endif
