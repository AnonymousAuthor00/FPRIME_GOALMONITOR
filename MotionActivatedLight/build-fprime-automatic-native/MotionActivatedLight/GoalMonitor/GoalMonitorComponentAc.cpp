// ======================================================================
// \title  GoalMonitorComponentAc.cpp
// \author Auto-generated
// \brief  cpp file for GoalMonitor component base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include <cstdio>
#include <FpConfig.hpp>
#include <MotionActivatedLight/GoalMonitor/GoalMonitorComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#if FW_ENABLE_TEXT_LOGGING
#include <Fw/Types/String.hpp>
#endif


namespace MotionActivatedLight {

  // ----------------------------------------------------------------------
  // Anonymous namespace to prevent name collisions
  // ----------------------------------------------------------------------

  namespace {

    typedef enum {
      GOALMONITOR_COMPONENT_EXIT = Fw::ActiveComponentBase::ACTIVE_COMPONENT_EXIT,
      CMD_MONITOR
    } MsgTypeEnum;

    // Get the max size by doing a union of the input port serialization sizes.

    typedef union {
      BYTE cmdPort[Fw::InputCmdPort::SERIALIZED_SIZE];
    } BuffUnion;

    // Define a message buffer class large enough to handle all the
    // asynchronous inputs to the component

    class ComponentIpcSerializableBuffer :
      public Fw::SerializeBufferBase
    {

      public:

        enum {
          // Max. message size = size of data + message id + port
          SERIALIZATION_SIZE =
            sizeof(BuffUnion) +
            sizeof(NATIVE_INT_TYPE) +
            sizeof(NATIVE_INT_TYPE)
        };

        NATIVE_UINT_TYPE getBuffCapacity() const {
          return sizeof(m_buff);
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:
        // Should be the max of all the input ports serialized sizes...
        U8 m_buff[SERIALIZATION_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of input ports
  // ----------------------------------------------------------------------

  MotionActivatedLight::InputPortBPort *GoalMonitorComponentBase ::
    get_BIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_BIn_InputPorts(),static_cast<FwAssertArgType>(portNum));
    return &this->m_BIn_InputPort[portNum];
  }

  MotionActivatedLight::InputPortFPort *GoalMonitorComponentBase ::
    get_FIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_FIn_InputPorts(),static_cast<FwAssertArgType>(portNum));
    return &this->m_FIn_InputPort[portNum];
  }

  MotionActivatedLight::InputPortUPort *GoalMonitorComponentBase ::
    get_UIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_UIn_InputPorts(),static_cast<FwAssertArgType>(portNum));
    return &this->m_UIn_InputPort[portNum];
  }

  Fw::InputCmdPort *GoalMonitorComponentBase ::
    get_cmdIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_cmdIn_InputPorts(),static_cast<FwAssertArgType>(portNum));
    return &this->m_cmdIn_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Typed connectors for output ports
  // ----------------------------------------------------------------------

  void GoalMonitorComponentBase ::
    set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputCmdRegPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_cmdRegOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_cmdRegOut_OutputPort[portNum].addCallPort(port);
  }

  void GoalMonitorComponentBase ::
    set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputCmdResponsePort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_cmdResponseOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_cmdResponseOut_OutputPort[portNum].addCallPort(port);
  }

  void GoalMonitorComponentBase ::
    set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputLogPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_eventOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_eventOut_OutputPort[portNum].addCallPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void GoalMonitorComponentBase ::
    set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputLogTextPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_textEventOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_textEventOut_OutputPort[portNum].addCallPort(port);
  }
#endif

  void GoalMonitorComponentBase ::
    set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputTimePort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_timeGetOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_timeGetOut_OutputPort[portNum].addCallPort(port);
  }

  void GoalMonitorComponentBase ::
    set_varReq2Out_OutputPort(
        NATIVE_INT_TYPE portNum,
        MotionActivatedLight::InputVarReqPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_varReq2Out_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_varReq2Out_OutputPort[portNum].addCallPort(port);
  }

  void GoalMonitorComponentBase ::
    set_varReq4Out_OutputPort(
        NATIVE_INT_TYPE portNum,
        MotionActivatedLight::InputVarReqPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_varReq4Out_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_varReq4Out_OutputPort[portNum].addCallPort(port);
  }

  void GoalMonitorComponentBase ::
    set_varReq5Out_OutputPort(
        NATIVE_INT_TYPE portNum,
        MotionActivatedLight::InputVarReqPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_varReq5Out_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_varReq5Out_OutputPort[portNum].addCallPort(port);
  }

  // ----------------------------------------------------------------------
  // Serialization connectors for output ports
  // ----------------------------------------------------------------------

#if FW_PORT_SERIALIZATION

  void GoalMonitorComponentBase ::
    set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_cmdRegOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_cmdRegOut_OutputPort[portNum].registerSerialPort(port);
  }

  void GoalMonitorComponentBase ::
    set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_cmdResponseOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_cmdResponseOut_OutputPort[portNum].registerSerialPort(port);
  }

  void GoalMonitorComponentBase ::
    set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_eventOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_eventOut_OutputPort[portNum].registerSerialPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void GoalMonitorComponentBase ::
    set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_textEventOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_textEventOut_OutputPort[portNum].registerSerialPort(port);
  }
#endif

  void GoalMonitorComponentBase ::
    set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_timeGetOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_timeGetOut_OutputPort[portNum].registerSerialPort(port);
  }

  void GoalMonitorComponentBase ::
    set_varReq2Out_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_varReq2Out_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_varReq2Out_OutputPort[portNum].registerSerialPort(port);
  }

  void GoalMonitorComponentBase ::
    set_varReq4Out_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_varReq4Out_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_varReq4Out_OutputPort[portNum].registerSerialPort(port);
  }

  void GoalMonitorComponentBase ::
    set_varReq5Out_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_varReq5Out_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_varReq5Out_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  // ----------------------------------------------------------------------
  // Command registration
  // ----------------------------------------------------------------------

  void GoalMonitorComponentBase ::
    regCommands()
  {
    FW_ASSERT(this->m_cmdRegOut_OutputPort[0].isConnected());
    this->m_cmdRegOut_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_MONITOR
    );
  }

  // ----------------------------------------------------------------------
  // Component construction, initialization, and destruction
  // ----------------------------------------------------------------------

    GoalMonitorComponentBase :: GoalMonitorComponentBase(const char* compName) :
        Fw::ActiveComponentBase(compName) {



  }

  void GoalMonitorComponentBase ::
    init(
        NATIVE_INT_TYPE queueDepth,
        NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class
    Fw::ActiveComponentBase::init(instance);

    // Connect input port BIn
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_BIn_InputPorts());
        port++
    ) {

      this->m_BIn_InputPort[port].init();
      this->m_BIn_InputPort[port].addCallComp(
          this,
          m_p_BIn_in
      );
      this->m_BIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_BIn_InputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_BIn_InputPort[port].setObjName(portName);
#endif

    }

    // Connect input port FIn
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_FIn_InputPorts());
        port++
    ) {

      this->m_FIn_InputPort[port].init();
      this->m_FIn_InputPort[port].addCallComp(
          this,
          m_p_FIn_in
      );
      this->m_FIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_FIn_InputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_FIn_InputPort[port].setObjName(portName);
#endif

    }

    // Connect input port UIn
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_UIn_InputPorts());
        port++
    ) {

      this->m_UIn_InputPort[port].init();
      this->m_UIn_InputPort[port].addCallComp(
          this,
          m_p_UIn_in
      );
      this->m_UIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_UIn_InputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_UIn_InputPort[port].setObjName(portName);
#endif

    }

    // Connect input port cmdIn
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_cmdIn_InputPorts());
        port++
    ) {

      this->m_cmdIn_InputPort[port].init();
      this->m_cmdIn_InputPort[port].addCallComp(
          this,
          m_p_cmdIn_in
      );
      this->m_cmdIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_cmdIn_InputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_cmdIn_InputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port cmdRegOut
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_cmdRegOut_OutputPorts());
        port++
    ) {
      this->m_cmdRegOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_cmdRegOut_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_cmdRegOut_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port cmdResponseOut
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_cmdResponseOut_OutputPorts());
        port++
    ) {
      this->m_cmdResponseOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_cmdResponseOut_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_cmdResponseOut_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port eventOut
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_eventOut_OutputPorts());
        port++
    ) {
      this->m_eventOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_eventOut_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_eventOut_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port textEventOut
#if FW_ENABLE_TEXT_LOGGING == 1
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_textEventOut_OutputPorts());
        port++
    ) {
      this->m_textEventOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_textEventOut_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_textEventOut_OutputPort[port].setObjName(portName);
#endif

    }
#endif

    // Initialize output port timeGetOut
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_timeGetOut_OutputPorts());
        port++
    ) {
      this->m_timeGetOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_timeGetOut_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_timeGetOut_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port varReq2Out
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_varReq2Out_OutputPorts());
        port++
    ) {
      this->m_varReq2Out_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_varReq2Out_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_varReq2Out_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port varReq4Out
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_varReq4Out_OutputPorts());
        port++
    ) {
      this->m_varReq4Out_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_varReq4Out_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_varReq4Out_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port varReq5Out
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_varReq5Out_OutputPorts());
        port++
    ) {
      this->m_varReq5Out_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_varReq5Out_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_varReq5Out_OutputPort[port].setObjName(portName);
#endif

    }

    Os::Queue::QueueStatus qStat =
    this->createQueue(
        queueDepth,
        ComponentIpcSerializableBuffer::SERIALIZATION_SIZE
    );
    FW_ASSERT(
        Os::Queue::QUEUE_OK == qStat,
        static_cast<FwAssertArgType>(qStat)
    );

  }

  GoalMonitorComponentBase::
    ~GoalMonitorComponentBase() {

  }

  // ----------------------------------------------------------------------
  // Invocation functions for output ports
  // ----------------------------------------------------------------------

  void GoalMonitorComponentBase ::
    varReq2Out_out(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_varReq2Out_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_varReq2Out_OutputPort[portNum].invoke();
  }

  void GoalMonitorComponentBase ::
    varReq4Out_out(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_varReq4Out_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_varReq4Out_OutputPort[portNum].invoke();
  }

  void GoalMonitorComponentBase ::
    varReq5Out_out(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_varReq5Out_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_varReq5Out_OutputPort[portNum].invoke();
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_BIn_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_BIn_InputPort));
  }

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_FIn_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_FIn_InputPort));
  }

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_UIn_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_UIn_InputPort));
  }

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_cmdIn_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_cmdIn_InputPort));
  }

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_cmdRegOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_cmdRegOut_OutputPort));
  }

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_cmdResponseOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_cmdResponseOut_OutputPort));
  }

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_eventOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_eventOut_OutputPort));
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_textEventOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_textEventOut_OutputPort));
  }
#endif

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_timeGetOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_timeGetOut_OutputPort));
  }

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_varReq2Out_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_varReq2Out_OutputPort));
  }

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_varReq4Out_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_varReq4Out_OutputPort));
  }

  NATIVE_INT_TYPE GoalMonitorComponentBase ::
    getNum_varReq5Out_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_varReq5Out_OutputPort));
  }

  // ----------------------------------------------------------------------
  // Port connection status queries
  // ----------------------------------------------------------------------

  bool GoalMonitorComponentBase ::
    isConnected_cmdRegOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_cmdRegOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_cmdRegOut_OutputPort[portNum].isConnected();
  }

  bool GoalMonitorComponentBase ::
    isConnected_cmdResponseOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_cmdResponseOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_cmdResponseOut_OutputPort[portNum].isConnected();
  }

  bool GoalMonitorComponentBase ::
    isConnected_eventOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_eventOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_eventOut_OutputPort[portNum].isConnected();
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  bool GoalMonitorComponentBase ::
    isConnected_textEventOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_textEventOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_textEventOut_OutputPort[portNum].isConnected();
  }
#endif

  bool GoalMonitorComponentBase ::
    isConnected_timeGetOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_timeGetOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_timeGetOut_OutputPort[portNum].isConnected();
  }

  bool GoalMonitorComponentBase ::
    isConnected_varReq2Out_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_varReq2Out_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_varReq2Out_OutputPort[portNum].isConnected();
  }

  bool GoalMonitorComponentBase ::
    isConnected_varReq4Out_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_varReq4Out_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_varReq4Out_OutputPort[portNum].isConnected();
  }

  bool GoalMonitorComponentBase ::
    isConnected_varReq5Out_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_varReq5Out_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_varReq5Out_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Calls for messages received on command input ports
  // ----------------------------------------------------------------------

  void GoalMonitorComponentBase ::
    m_p_cmdIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdArgBuffer &args
    )
  {

    // Select base class function based on opcode
    FW_ASSERT(callComp);
    GoalMonitorComponentBase* compPtr = static_cast<GoalMonitorComponentBase*>(callComp);

    const U32 idBase = callComp->getIdBase();
    FW_ASSERT(opCode >= idBase, opCode, idBase);
    switch (opCode - idBase) {

      case OPCODE_MONITOR: /*!<  */
        compPtr->monitor_cmdHandlerBase(
            opCode,
            cmdSeq,
            args
        );
        break;

      default: {
        compPtr->cmdResponse_out(
            opCode,cmdSeq,
            Fw::CmdResponse::INVALID_OPCODE
        );
        break;
      }

    }

  }

  void GoalMonitorComponentBase ::
    cmdResponse_out(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdResponse response
    )
  {
    FW_ASSERT(this->m_cmdResponseOut_OutputPort[0].isConnected());
    this->m_cmdResponseOut_OutputPort[0].invoke(opCode,cmdSeq,response);
  }

  // ----------------------------------------------------------------------
  // Base class command functions
  // ----------------------------------------------------------------------

  void GoalMonitorComponentBase ::
    monitor_cmdHandlerBase(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdArgBuffer &args
    )
  {

    // Call pre-message hook
    this->monitor_preMsgHook(opCode,cmdSeq);

    // Defer deserializing arguments to the message dispatcher
    // to avoid deserializing and reserializing just for IPC
    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize for IPC
    _status = msg.serialize(static_cast<NATIVE_INT_TYPE>(CMD_MONITOR));
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
        );

    // Fake port number to make message dequeue work
    NATIVE_INT_TYPE port = 0;
    _status = msg.serialize(port);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(opCode);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(cmdSeq);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
    );

    _status = msg.serialize(args);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(_status)
    );

    // send message
    Os::Queue::QueueBlocking _block =
      Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus =
      this->m_queue.send(msg, 0,_block);
    FW_ASSERT(
        qStatus == Os::Queue::QUEUE_OK,
        static_cast<FwAssertArgType>(qStatus)
    );

  }

  void GoalMonitorComponentBase::
    monitor_preMsgHook(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // Defaults to no-op; can be overridden
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  Fw::Time GoalMonitorComponentBase ::
    getTime()
  {
    if (this->m_timeGetOut_OutputPort[0].isConnected()) {
      Fw::Time _time;
      this->m_timeGetOut_OutputPort[0].invoke(_time);
      return _time;
    } else {
      return Fw::Time(TB_NONE,0,0);
    }
  }

  // ----------------------------------------------------------------------
  // Event handling functions
  // ----------------------------------------------------------------------

  void GoalMonitorComponentBase ::
    log_ACTIVITY_HI_SATISFIED(
        U32 number
    )
  {


    // Get the time
    Fw::Time _logTime;
    if (this->m_timeGetOut_OutputPort[0].isConnected()) {
       this->m_timeGetOut_OutputPort[0].invoke( _logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_SATISFIED;

    // Emit the event on the log port
    if (this->m_eventOut_OutputPort[0].isConnected()) {

      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(1));
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof())
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(number);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );


      this->m_eventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logBuff
      );

    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_textEventOut_OutputPort[0].isConnected()) {

#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Goal No.%u satisfied";
#else
      const char* _formatString =
        "%s: Goal No.%u satisfied";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
          _textBuffer,
          FW_LOG_TEXT_BUFFER_SIZE,
          _formatString,
#if FW_OBJECT_NAMES == 1
          this->m_objName,
#endif
          "SATISFIED "
        , number
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_textEventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logString
      );

    }
#endif

  }


  void GoalMonitorComponentBase ::
    log_ACTIVITY_HI_NOTSATISFIED(
        U32 number
    )
  {


    // Get the time
    Fw::Time _logTime;
    if (this->m_timeGetOut_OutputPort[0].isConnected()) {
       this->m_timeGetOut_OutputPort[0].invoke( _logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_NOTSATISFIED;

    // Emit the event on the log port
    if (this->m_eventOut_OutputPort[0].isConnected()) {

      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(1));
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof())
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(number);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );


      this->m_eventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logBuff
      );

    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_textEventOut_OutputPort[0].isConnected()) {

#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Goal No.%u not satisfied";
#else
      const char* _formatString =
        "%s: Goal No.%u not satisfied";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
          _textBuffer,
          FW_LOG_TEXT_BUFFER_SIZE,
          _formatString,
#if FW_OBJECT_NAMES == 1
          this->m_objName,
#endif
          "NOTSATISFIED "
        , number
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_textEventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logString
      );

    }
#endif

  }


  void GoalMonitorComponentBase ::
    log_ACTIVITY_HI_RECVB(
        U32 number, bool value
    )
  {


    // Get the time
    Fw::Time _logTime;
    if (this->m_timeGetOut_OutputPort[0].isConnected()) {
       this->m_timeGetOut_OutputPort[0].invoke( _logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_RECVB;

    // Emit the event on the log port
    if (this->m_eventOut_OutputPort[0].isConnected()) {

      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(2));
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof())
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(number);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof())
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(value);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );


      this->m_eventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logBuff
      );

    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_textEventOut_OutputPort[0].isConnected()) {

#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Boolean variable No.%u received: %d";
#else
      const char* _formatString =
        "%s: Boolean variable No.%u received: %d";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
          _textBuffer,
          FW_LOG_TEXT_BUFFER_SIZE,
          _formatString,
#if FW_OBJECT_NAMES == 1
          this->m_objName,
#endif
          "RECVB "
        , number
        , value
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_textEventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logString
      );

    }
#endif

  }


  void GoalMonitorComponentBase ::
    log_ACTIVITY_HI_RECVF(
        U32 number, F32 value
    )
  {


    // Get the time
    Fw::Time _logTime;
    if (this->m_timeGetOut_OutputPort[0].isConnected()) {
       this->m_timeGetOut_OutputPort[0].invoke( _logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_RECVF;

    // Emit the event on the log port
    if (this->m_eventOut_OutputPort[0].isConnected()) {

      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(2));
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof())
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(number);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof())
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(value);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );


      this->m_eventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logBuff
      );

    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_textEventOut_OutputPort[0].isConnected()) {

#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Float variable No.%u received: %g";
#else
      const char* _formatString =
        "%s: Float variable No.%u received: %g";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
          _textBuffer,
          FW_LOG_TEXT_BUFFER_SIZE,
          _formatString,
#if FW_OBJECT_NAMES == 1
          this->m_objName,
#endif
          "RECVF "
        , number
        , value
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_textEventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logString
      );

    }
#endif

  }


  void GoalMonitorComponentBase ::
    log_ACTIVITY_HI_RECVU(
        U32 number, U32 value
    )
  {


    // Get the time
    Fw::Time _logTime;
    if (this->m_timeGetOut_OutputPort[0].isConnected()) {
       this->m_timeGetOut_OutputPort[0].invoke( _logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_RECVU;

    // Emit the event on the log port
    if (this->m_eventOut_OutputPort[0].isConnected()) {

      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(2));
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof())
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(number);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof())
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );
#endif
      _status = _logBuff.serialize(value);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_status)
      );


      this->m_eventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logBuff
      );

    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_textEventOut_OutputPort[0].isConnected()) {

#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Integer variable No.%u received: %u";
#else
      const char* _formatString =
        "%s: Integer variable No.%u received: %u";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
          _textBuffer,
          FW_LOG_TEXT_BUFFER_SIZE,
          _formatString,
#if FW_OBJECT_NAMES == 1
          this->m_objName,
#endif
          "RECVU "
        , number
        , value
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_textEventOut_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LogSeverity::ACTIVITY_HI,
          _logString
      );

    }
#endif

  }


  // ----------------------------------------------------------------------
  // Calls for invocations received on typed input ports
  // ----------------------------------------------------------------------

  void GoalMonitorComponentBase ::
    m_p_BIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        bool data, U32 number
    )
  {
    FW_ASSERT(callComp);
    GoalMonitorComponentBase* compPtr = static_cast<GoalMonitorComponentBase*>(callComp);
    compPtr->BIn_handlerBase(portNum, data, number);
  }

  void GoalMonitorComponentBase ::
    m_p_FIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        F32 data, U32 number
    )
  {
    FW_ASSERT(callComp);
    GoalMonitorComponentBase* compPtr = static_cast<GoalMonitorComponentBase*>(callComp);
    compPtr->FIn_handlerBase(portNum, data, number);
  }

  void GoalMonitorComponentBase ::
    m_p_UIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        U32 data, U32 number
    )
  {
    FW_ASSERT(callComp);
    GoalMonitorComponentBase* compPtr = static_cast<GoalMonitorComponentBase*>(callComp);
    compPtr->UIn_handlerBase(portNum, data, number);
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  // ----------------------------------------------------------------------

  void GoalMonitorComponentBase ::
    BIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        bool data, U32 number
    )
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_BIn_InputPorts(),static_cast<FwAssertArgType>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->BIn_handler(portNum, data, number);

  }

  void GoalMonitorComponentBase ::
    FIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        F32 data, U32 number
    )
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_FIn_InputPorts(),static_cast<FwAssertArgType>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->FIn_handler(portNum, data, number);

  }

  void GoalMonitorComponentBase ::
    UIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        U32 data, U32 number
    )
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_UIn_InputPorts(),static_cast<FwAssertArgType>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->UIn_handler(portNum, data, number);

  }

  // ----------------------------------------------------------------------
  // Message dispatch method for active and queued components. Called
  // by active component thread or implementation code for queued components
  // ----------------------------------------------------------------------

  Fw::QueuedComponentBase::MsgDispatchStatus GoalMonitorComponentBase ::
    doDispatch()
  {
    ComponentIpcSerializableBuffer msg;
    NATIVE_INT_TYPE priority = 0;

    Os::Queue::QueueStatus msgStatus = this->m_queue.receive(msg,priority,Os::Queue::QUEUE_BLOCKING);
    FW_ASSERT(
        msgStatus == Os::Queue::QUEUE_OK,
        static_cast<FwAssertArgType>(msgStatus)
    );

    // Reset to beginning of buffer
    msg.resetDeser();

    NATIVE_INT_TYPE desMsg = 0;
    Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
    FW_ASSERT(
        deserStatus == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(deserStatus)
    );

    MsgTypeEnum msgType = static_cast<MsgTypeEnum>(desMsg);

    if (msgType == GOALMONITOR_COMPONENT_EXIT) {
      return MSG_DISPATCH_EXIT;
    }

    NATIVE_INT_TYPE portNum = 0;
    deserStatus = msg.deserialize(portNum);
    FW_ASSERT(
        deserStatus == Fw::FW_SERIALIZE_OK,
        static_cast<FwAssertArgType>(deserStatus)
    );

    switch (msgType) {

      // Handle command monitor
      case CMD_MONITOR: {
        // Deserialize opcode
        FwOpcodeType opCode = 0;
        deserStatus = msg.deserialize(opCode);
        FW_ASSERT (
            deserStatus == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(deserStatus)
        );

        // Deserialize command sequence
        U32 cmdSeq = 0;
        deserStatus = msg.deserialize(cmdSeq);
        FW_ASSERT (
            deserStatus == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(deserStatus)
        );

        // Deserialize command argument buffer
        Fw::CmdArgBuffer args;
        deserStatus = msg.deserialize(args);
        FW_ASSERT (
            deserStatus == Fw::FW_SERIALIZE_OK,
            static_cast<FwAssertArgType>(deserStatus)
        );

        // Reset buffer
        args.resetDeser();

        // Make sure there was no data left over.
        // That means the argument buffer size was incorrect.
#if FW_CMD_CHECK_RESIDUAL
        if (args.getBuffLeft() != 0) {
          if (this->m_cmdResponseOut_OutputPort[0].isConnected()) {
            this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::FORMAT_ERROR);
          }
          // Don't crash the task if bad arguments were passed from the ground
          break;
        }
#endif
        // Call handler function
        this->monitor_cmdHandler(opCode, cmdSeq);

        break;

      }

      default:
        return MSG_DISPATCH_ERROR;

    }

    return MSG_DISPATCH_OK;

  }

} // end namespace MotionActivatedLight
