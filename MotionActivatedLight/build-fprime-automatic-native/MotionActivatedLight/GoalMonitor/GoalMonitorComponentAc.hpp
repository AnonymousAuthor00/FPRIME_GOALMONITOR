// ======================================================================
// \title  GoalMonitorComponentAc.hpp
// \author Auto-generated
// \brief  hpp file for GoalMonitor component base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef MOTIONACTIVATEDLIGHT_GOALMONITOR_COMP_HPP_
#define MOTIONACTIVATEDLIGHT_GOALMONITOR_COMP_HPP_

#include <FpConfig.hpp>
#include <Fw/Port/InputSerializePort.hpp>
#include <Fw/Port/OutputSerializePort.hpp>
#include <Fw/Comp/ActiveComponentBase.hpp>
#include <Fw/Cmd/CmdString.hpp>
#include <Fw/Time/TimePortAc.hpp>
#include <Fw/Log/LogString.hpp>
#include <Fw/Cmd/CmdResponseEnumAc.hpp>
#include <Fw/Log/LogSeverityEnumAc.hpp>
#include <Fw/Cmd/CmdArgBuffer.hpp>
#include <Fw/Log/LogBuffer.hpp>
#include <Fw/Time/Time.hpp>
#include <Fw/Log/TextLogString.hpp>
#include <Fw/Cmd/CmdArgBuffer.hpp>
#include <Fw/Log/LogBuffer.hpp>
#include <Fw/Time/Time.hpp>
#include <Fw/Log/TextLogString.hpp>
#include <Fw/Time/Time.hpp>
#include <Fw/Time/Time.hpp>
#include <Fw/Cmd/CmdPortAc.hpp>
#include <Fw/Cmd/CmdRegPortAc.hpp>
#include <Fw/Cmd/CmdResponsePortAc.hpp>
#include <Fw/Log/LogPortAc.hpp>
#if FW_ENABLE_TEXT_LOGGING == 1
#include <Fw/Log/LogTextPortAc.hpp>
#endif
#include <Fw/Time/TimePortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortBPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortFPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortUPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/VarReqPortAc.hpp>

namespace MotionActivatedLight {

  //! \class GoalMonitorComponentBase
  //! \brief Auto-generated base for GoalMonitor component
  //!
  class GoalMonitorComponentBase :
    public Fw::ActiveComponentBase
  {

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    //!
    friend class GoalMonitorComponentBaseFriend;

  public:

    // ----------------------------------------------------------------------
    // Getters for typed input ports
    // ----------------------------------------------------------------------

    //! Get input port at index
    //!
    //! \return BIn[portNum]
    //!
    MotionActivatedLight::InputPortBPort* get_BIn_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Get input port at index
    //!
    //! \return FIn[portNum]
    //!
    MotionActivatedLight::InputPortFPort* get_FIn_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Get input port at index
    //!
    //! \return UIn[portNum]
    //!
    MotionActivatedLight::InputPortUPort* get_UIn_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Get input port at index
    //!
    //! \return cmdIn[portNum]
    //!
    Fw::InputCmdPort* get_cmdIn_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

  public:

    // ----------------------------------------------------------------------
    // Connect typed input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    //!
    void set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputCmdRegPort *port /*!< The port*/
    );

    //! Connect port to cmdResponseOut[portNum]
    //!
    void set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputCmdResponsePort *port /*!< The port*/
    );

    //! Connect port to eventOut[portNum]
    //!
    void set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputLogPort *port /*!< The port*/
    );

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Connect port to textEventOut[portNum]
    //!
    void set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputLogTextPort *port /*!< The port*/
    );
#endif

    //! Connect port to timeGetOut[portNum]
    //!
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputTimePort *port /*!< The port*/
    );

    //! Connect port to varReq2Out[portNum]
    //!
    void set_varReq2Out_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        MotionActivatedLight::InputVarReqPort *port /*!< The port*/
    );

    //! Connect port to varReq4Out[portNum]
    //!
    void set_varReq4Out_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        MotionActivatedLight::InputVarReqPort *port /*!< The port*/
    );

    //! Connect port to varReq5Out[portNum]
    //!
    void set_varReq5Out_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        MotionActivatedLight::InputVarReqPort *port /*!< The port*/
    );

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serialization input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    //!
    void set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to cmdResponseOut[portNum]
    //!
    void set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to eventOut[portNum]
    //!
    void set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Connect port to textEventOut[portNum]
    //!
    void set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );
#endif

    //! Connect port to timeGetOut[portNum]
    //!
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to varReq2Out[portNum]
    //!
    void set_varReq2Out_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to varReq4Out[portNum]
    //!
    void set_varReq4Out_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to varReq5Out[portNum]
    //!
    void set_varReq5Out_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

#endif

  public:

    // ----------------------------------------------------------------------
    // Command registration
    // ----------------------------------------------------------------------

    //! \brief Register commands with the Command Dispatcher
    //!
    //! Connect the dispatcher first
    //!
    void regCommands();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction, initialization, and destruction
    // ----------------------------------------------------------------------

    //! Construct a GoalMonitorComponentBase object
    //!
    GoalMonitorComponentBase(
        const char* compName = "" /*!< Component name*/
    );

  public:
    //! Initialize a GoalMonitorComponentBase object
    //!
    void init(
        NATIVE_INT_TYPE queueDepth, /*!< The queue depth*/
        NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
    );

  PROTECTED:
    //! Destroy a GoalMonitorComponentBase object
    //!
    virtual ~GoalMonitorComponentBase();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for typed input ports
    // ----------------------------------------------------------------------

    //! Handler for input port BIn
    //
    virtual void BIn_handler(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        bool data, 
        U32 number 
    ) = 0;

    //! Handler for input port FIn
    //
    virtual void FIn_handler(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 data, 
        U32 number 
    ) = 0;

    //! Handler for input port UIn
    //
    virtual void UIn_handler(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        U32 data, 
        U32 number 
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for typed input ports.
    // ----------------------------------------------------------------------
    // Call these functions directly to bypass the corresponding ports.
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port BIn
    //!
    void BIn_handlerBase(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        bool data, 
        U32 number 
    );

    //! Handler base-class function for input port FIn
    //!
    void FIn_handlerBase(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 data, 
        U32 number 
    );

    //! Handler base-class function for input port UIn
    //!
    void UIn_handlerBase(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        U32 data, 
        U32 number 
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for typed output ports
    // ----------------------------------------------------------------------

    //! Invoke output port varReq2Out
    //!
    void varReq2Out_out(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Invoke output port varReq4Out
    //!
    void varReq4Out_out(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Invoke output port varReq5Out
    //!
    void varReq5Out_out(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of input ports
    // ----------------------------------------------------------------------

    //! Get the number of BIn input ports
    //!
    //! \return The number of BIn input ports
    //!
    NATIVE_INT_TYPE getNum_BIn_InputPorts();

    //! Get the number of FIn input ports
    //!
    //! \return The number of FIn input ports
    //!
    NATIVE_INT_TYPE getNum_FIn_InputPorts();

    //! Get the number of UIn input ports
    //!
    //! \return The number of UIn input ports
    //!
    NATIVE_INT_TYPE getNum_UIn_InputPorts();

    //! Get the number of cmdIn input ports
    //!
    //! \return The number of cmdIn input ports
    //!
    NATIVE_INT_TYPE getNum_cmdIn_InputPorts();


    // ----------------------------------------------------------------------
    // Enumerations for number of ports
    // ----------------------------------------------------------------------

    enum {
       NUM_BIN_INPUT_PORTS = 1,
       NUM_FIN_INPUT_PORTS = 1,
       NUM_UIN_INPUT_PORTS = 1,
       NUM_CMDIN_INPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of output ports
    // ----------------------------------------------------------------------

    //! Get the number of cmdRegOut output ports
    //!
    //! \return The number of cmdRegOut output ports
    //!
    NATIVE_INT_TYPE getNum_cmdRegOut_OutputPorts();

    //! Get the number of cmdResponseOut output ports
    //!
    //! \return The number of cmdResponseOut output ports
    //!
    NATIVE_INT_TYPE getNum_cmdResponseOut_OutputPorts();

    //! Get the number of eventOut output ports
    //!
    //! \return The number of eventOut output ports
    //!
    NATIVE_INT_TYPE getNum_eventOut_OutputPorts();

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Get the number of textEventOut output ports
    //!
    //! \return The number of textEventOut output ports
    //!
    NATIVE_INT_TYPE getNum_textEventOut_OutputPorts();
#endif

    //! Get the number of timeGetOut output ports
    //!
    //! \return The number of timeGetOut output ports
    //!
    NATIVE_INT_TYPE getNum_timeGetOut_OutputPorts();

    //! Get the number of varReq2Out output ports
    //!
    //! \return The number of varReq2Out output ports
    //!
    NATIVE_INT_TYPE getNum_varReq2Out_OutputPorts();

    //! Get the number of varReq4Out output ports
    //!
    //! \return The number of varReq4Out output ports
    //!
    NATIVE_INT_TYPE getNum_varReq4Out_OutputPorts();

    //! Get the number of varReq5Out output ports
    //!
    //! \return The number of varReq5Out output ports
    //!
    NATIVE_INT_TYPE getNum_varReq5Out_OutputPorts();


    enum {
       NUM_CMDREGOUT_OUTPUT_PORTS = 1,
       NUM_CMDRESPONSEOUT_OUTPUT_PORTS = 1,
       NUM_EVENTOUT_OUTPUT_PORTS = 1,
       NUM_TEXTEVENTOUT_OUTPUT_PORTS = 1,
       NUM_TIMEGETOUT_OUTPUT_PORTS = 1,
       NUM_VARREQ2OUT_OUTPUT_PORTS = 1,
       NUM_VARREQ4OUT_OUTPUT_PORTS = 1,
       NUM_VARREQ5OUT_OUTPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for output ports
    // ----------------------------------------------------------------------

    //! Check whether port cmdRegOut is connected
    //!
    //! \return Whether port cmdRegOut is connected
    //!
    bool isConnected_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port cmdResponseOut is connected
    //!
    //! \return Whether port cmdResponseOut is connected
    //!
    bool isConnected_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port eventOut is connected
    //!
    //! \return Whether port eventOut is connected
    //!
    bool isConnected_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Check whether port textEventOut is connected
    //!
    //! \return Whether port textEventOut is connected
    //!
    bool isConnected_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );
#endif

    //! Check whether port timeGetOut is connected
    //!
    //! \return Whether port timeGetOut is connected
    //!
    bool isConnected_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port varReq2Out is connected
    //!
    //! \return Whether port varReq2Out is connected
    //!
    bool isConnected_varReq2Out_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port varReq4Out is connected
    //!
    //! \return Whether port varReq4Out is connected
    //!
    bool isConnected_varReq4Out_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port varReq5Out is connected
    //!
    //! \return Whether port varReq5Out is connected
    //!
    bool isConnected_varReq5Out_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command opcodes
    // ----------------------------------------------------------------------

    enum {
      OPCODE_MONITOR = 0x0, /*  */
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command handlers to implement
    // ----------------------------------------------------------------------

    //! Handler for command monitor
    /*  */
    virtual void monitor_cmdHandler(
        FwOpcodeType opCode, /*!< The opcode*/
        U32 cmdSeq /*!< The command sequence number*/
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Pre-message hooks for async commands.
    // ----------------------------------------------------------------------
    // Each of these functions is invoked just before processing the
    // corresponding command. By default they do nothing. You can
    // override them to provide specific pre-command behavior.
    // ----------------------------------------------------------------------

    //! Pre-message hook for command monitor
    //!
    virtual void monitor_preMsgHook(
        FwOpcodeType opCode, /*!< The opcode*/
        U32 cmdSeq /*!< The command sequence number*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command handler base-class functions.
    // Call these functions directly to bypass the command input port.
    // ----------------------------------------------------------------------

    //! Base-class handler function for command monitor
    //!
    void monitor_cmdHandlerBase(
        FwOpcodeType opCode, /*!< The opcode*/
        U32 cmdSeq, /*!< The command sequence number*/
        Fw::CmdArgBuffer &args /*!< The command argument buffer*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command response
    // ----------------------------------------------------------------------

    //! Emit command response
    //!
    void cmdResponse_out(
        FwOpcodeType opCode, /*!< The opcode*/
        U32 cmdSeq, /*!< The command sequence number*/
        Fw::CmdResponse response /*!< The command response*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event IDs
    // ----------------------------------------------------------------------

    enum {
      EVENTID_SATISFIED = 0x0, /*  */
      EVENTID_NOTSATISFIED = 0x1, /*  */
      EVENTID_RECVB = 0x2, /*  */
      EVENTID_RECVF = 0x3, /*  */
      EVENTID_RECVU = 0x4, /*  */
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event logging functions
    // ----------------------------------------------------------------------

    //! Log event SATISFIED
    //!
    void log_ACTIVITY_HI_SATISFIED(
        U32 number 
    );


    //! Log event NOTSATISFIED
    //!
    void log_ACTIVITY_HI_NOTSATISFIED(
        U32 number 
    );


    //! Log event RECVB
    //!
    void log_ACTIVITY_HI_RECVB(
        U32 number, 
        bool value 
    );


    //! Log event RECVF
    //!
    void log_ACTIVITY_HI_RECVF(
        U32 number, 
        F32 value 
    );


    //! Log event RECVU
    //!
    void log_ACTIVITY_HI_RECVU(
        U32 number, 
        U32 value 
    );


  PROTECTED:

    // ----------------------------------------------------------------------
    // Time
    // ----------------------------------------------------------------------

    //! Get the time
    //!
    //! \return The current time
    //!
    Fw::Time getTime();



  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed input ports
    // ----------------------------------------------------------------------

    //! Input port BIn
    //!
    MotionActivatedLight::InputPortBPort m_BIn_InputPort[NUM_BIN_INPUT_PORTS];

    //! Input port FIn
    //!
    MotionActivatedLight::InputPortFPort m_FIn_InputPort[NUM_FIN_INPUT_PORTS];

    //! Input port UIn
    //!
    MotionActivatedLight::InputPortUPort m_UIn_InputPort[NUM_UIN_INPUT_PORTS];

    //! Input port cmdIn
    //!
    Fw::InputCmdPort m_cmdIn_InputPort[NUM_CMDIN_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed output ports
    // ----------------------------------------------------------------------

    //! Output port cmdRegOut
    //!
    Fw::OutputCmdRegPort m_cmdRegOut_OutputPort[NUM_CMDREGOUT_OUTPUT_PORTS];

    //! Output port cmdResponseOut
    //!
    Fw::OutputCmdResponsePort m_cmdResponseOut_OutputPort[NUM_CMDRESPONSEOUT_OUTPUT_PORTS];

    //! Output port eventOut
    //!
    Fw::OutputLogPort m_eventOut_OutputPort[NUM_EVENTOUT_OUTPUT_PORTS];

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Output port textEventOut
    //!
    Fw::OutputLogTextPort m_textEventOut_OutputPort[NUM_TEXTEVENTOUT_OUTPUT_PORTS];
#endif

    //! Output port timeGetOut
    //!
    Fw::OutputTimePort m_timeGetOut_OutputPort[NUM_TIMEGETOUT_OUTPUT_PORTS];

    //! Output port varReq2Out
    //!
    MotionActivatedLight::OutputVarReqPort m_varReq2Out_OutputPort[NUM_VARREQ2OUT_OUTPUT_PORTS];

    //! Output port varReq4Out
    //!
    MotionActivatedLight::OutputVarReqPort m_varReq4Out_OutputPort[NUM_VARREQ4OUT_OUTPUT_PORTS];

    //! Output port varReq5Out
    //!
    MotionActivatedLight::OutputVarReqPort m_varReq5Out_OutputPort[NUM_VARREQ5OUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on typed input ports
    // ----------------------------------------------------------------------

    //! Callback for port BIn
    //!
    static void m_p_BIn_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        bool data, 
        U32 number 
    );

    //! Callback for port FIn
    //!
    static void m_p_FIn_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 data, 
        U32 number 
    );

    //! Callback for port UIn
    //!
    static void m_p_UIn_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        U32 data, 
        U32 number 
    );

    //! Callback for port cmdIn
    //!
    static void m_p_cmdIn_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        FwOpcodeType opCode, /*!< 
      Command Op Code
      */
        U32 cmdSeq, /*!< 
      Command Sequence
      */
        Fw::CmdArgBuffer &args /*!< 
      Buffer containing arguments
      */
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Message dispatch functions
    // ----------------------------------------------------------------------

    //! Called in the message loop to dispatch a message from the queue
    //!
    virtual MsgDispatchStatus doDispatch();


  PRIVATE:
    // ----------------------------------------------------------------------
    // Counter values for event throttling
    // ----------------------------------------------------------------------

  };

} // end namespace MotionActivatedLight
#endif
