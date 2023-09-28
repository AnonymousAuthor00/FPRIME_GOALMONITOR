// ======================================================================
// \title  GoalMonitorComponentImpl.cpp
// \author fprime
// \brief  cpp file for GoalMonitor component implementation class
// ======================================================================


#include <example/GoalMonitor/GoalMonitorComponentImpl.hpp>
#include <FpConfig.hpp>
#include <map>

namespace example {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  GoalMonitorComponentImpl ::
    GoalMonitorComponentImpl(
        const char *const compName
    ) : GoalMonitorComponentBase(compName)
  {
    // variables
  }

  GoalMonitorComponentImpl ::
    ~GoalMonitorComponentImpl()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void GoalMonitorComponentImpl ::
    BIn_handler(
        const NATIVE_INT_TYPE portNum,
        bool data,
        U32 number
    )
  {
    this->log_ACTIVITY_HI_RECVB(number, data);
    *(mapB[number]) = data;
    // TODO
  }

  void GoalMonitorComponentImpl ::
    FIn_handler(
        const NATIVE_INT_TYPE portNum,
        F32 data,
        U32 number
    )
  {
    this->log_ACTIVITY_HI_RECVF(number, data);
    *(mapF[number]) = data;
    // TODO
  }

  void GoalMonitorComponentImpl ::
    UIn_handler(
        const NATIVE_INT_TYPE portNum,
        U32 data,
        U32 number
    )
  {
    this->log_ACTIVITY_HI_RECVU(number, data);
    *(mapU[number]) = data;
    // TODO
  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void GoalMonitorComponentImpl ::
    monitor_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // varReq handlers
    goalSatisfactionCheck();
    this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::OK);
  }

} // end namespace example