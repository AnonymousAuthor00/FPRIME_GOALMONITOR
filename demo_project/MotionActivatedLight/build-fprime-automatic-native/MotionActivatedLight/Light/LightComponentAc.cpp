// ======================================================================
// \title  LightComponentAc.cpp
// \author Auto-generated
// \brief  cpp file for Light component base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include <cstdio>
#include <FpConfig.hpp>
#include <MotionActivatedLight/Light/LightComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#if FW_ENABLE_TEXT_LOGGING
#include <Fw/Types/String.hpp>
#endif


namespace MotionActivatedLight {

  // ----------------------------------------------------------------------
  // Getters for numbers of input ports
  // ----------------------------------------------------------------------

  Svc::InputSchedPort *LightComponentBase ::
    get_schedIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_schedIn_InputPorts(),static_cast<FwAssertArgType>(portNum));
    return &this->m_schedIn_InputPort[portNum];
  }

  MotionActivatedLight::InputPortTimePort *LightComponentBase ::
    get_timeIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_timeIn_InputPorts(),static_cast<FwAssertArgType>(portNum));
    return &this->m_timeIn_InputPort[portNum];
  }

  MotionActivatedLight::InputVarReqPort *LightComponentBase ::
    get_varReq5In_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_varReq5In_InputPorts(),static_cast<FwAssertArgType>(portNum));
    return &this->m_varReq5In_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Typed connectors for output ports
  // ----------------------------------------------------------------------

  void LightComponentBase ::
    set_BOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        MotionActivatedLight::InputPortBPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_BOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_BOut_OutputPort[portNum].addCallPort(port);
  }

  void LightComponentBase ::
    set_FOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        MotionActivatedLight::InputPortFPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_FOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_FOut_OutputPort[portNum].addCallPort(port);
  }

  void LightComponentBase ::
    set_UOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        MotionActivatedLight::InputPortUPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_UOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_UOut_OutputPort[portNum].addCallPort(port);
  }

  void LightComponentBase ::
    set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputLogPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_eventOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_eventOut_OutputPort[portNum].addCallPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void LightComponentBase ::
    set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputLogTextPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_textEventOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_textEventOut_OutputPort[portNum].addCallPort(port);
  }
#endif

  void LightComponentBase ::
    set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputTimePort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_timeGetOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_timeGetOut_OutputPort[portNum].addCallPort(port);
  }

  // ----------------------------------------------------------------------
  // Serialization connectors for output ports
  // ----------------------------------------------------------------------

#if FW_PORT_SERIALIZATION

  void LightComponentBase ::
    set_BOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_BOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_BOut_OutputPort[portNum].registerSerialPort(port);
  }

  void LightComponentBase ::
    set_FOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_FOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_FOut_OutputPort[portNum].registerSerialPort(port);
  }

  void LightComponentBase ::
    set_UOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_UOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_UOut_OutputPort[portNum].registerSerialPort(port);
  }

  void LightComponentBase ::
    set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_eventOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_eventOut_OutputPort[portNum].registerSerialPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void LightComponentBase ::
    set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_textEventOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_textEventOut_OutputPort[portNum].registerSerialPort(port);
  }
#endif

  void LightComponentBase ::
    set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_timeGetOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_timeGetOut_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  // ----------------------------------------------------------------------
  // Component construction, initialization, and destruction
  // ----------------------------------------------------------------------

    LightComponentBase :: LightComponentBase(const char* compName) :
        Fw::PassiveComponentBase(compName) {



  }

  void LightComponentBase ::
    init(NATIVE_INT_TYPE instance)
  {

    // Initialize base class
    Fw::PassiveComponentBase::init(instance);

    // Connect input port schedIn
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_schedIn_InputPorts());
        port++
    ) {

      this->m_schedIn_InputPort[port].init();
      this->m_schedIn_InputPort[port].addCallComp(
          this,
          m_p_schedIn_in
      );
      this->m_schedIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_schedIn_InputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_schedIn_InputPort[port].setObjName(portName);
#endif

    }

    // Connect input port timeIn
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_timeIn_InputPorts());
        port++
    ) {

      this->m_timeIn_InputPort[port].init();
      this->m_timeIn_InputPort[port].addCallComp(
          this,
          m_p_timeIn_in
      );
      this->m_timeIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_timeIn_InputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_timeIn_InputPort[port].setObjName(portName);
#endif

    }

    // Connect input port varReq5In
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_varReq5In_InputPorts());
        port++
    ) {

      this->m_varReq5In_InputPort[port].init();
      this->m_varReq5In_InputPort[port].addCallComp(
          this,
          m_p_varReq5In_in
      );
      this->m_varReq5In_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_varReq5In_InputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_varReq5In_InputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port BOut
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_BOut_OutputPorts());
        port++
    ) {
      this->m_BOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_BOut_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_BOut_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port FOut
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_FOut_OutputPorts());
        port++
    ) {
      this->m_FOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_FOut_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_FOut_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port UOut
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_UOut_OutputPorts());
        port++
    ) {
      this->m_UOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_UOut_OutputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_UOut_OutputPort[port].setObjName(portName);
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


  }

  LightComponentBase::
    ~LightComponentBase() {

  }

  // ----------------------------------------------------------------------
  // Invocation functions for output ports
  // ----------------------------------------------------------------------

  void LightComponentBase ::
    BOut_out(
        NATIVE_INT_TYPE portNum,
        bool data, U32 number
    )
  {
    FW_ASSERT(portNum < this->getNum_BOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_BOut_OutputPort[portNum].invoke(data, number);
  }

  void LightComponentBase ::
    FOut_out(
        NATIVE_INT_TYPE portNum,
        F32 data, U32 number
    )
  {
    FW_ASSERT(portNum < this->getNum_FOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_FOut_OutputPort[portNum].invoke(data, number);
  }

  void LightComponentBase ::
    UOut_out(
        NATIVE_INT_TYPE portNum,
        U32 data, U32 number
    )
  {
    FW_ASSERT(portNum < this->getNum_UOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_UOut_OutputPort[portNum].invoke(data, number);
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE LightComponentBase ::
    getNum_BOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_BOut_OutputPort));
  }

  NATIVE_INT_TYPE LightComponentBase ::
    getNum_FOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_FOut_OutputPort));
  }

  NATIVE_INT_TYPE LightComponentBase ::
    getNum_UOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_UOut_OutputPort));
  }

  NATIVE_INT_TYPE LightComponentBase ::
    getNum_eventOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_eventOut_OutputPort));
  }

  NATIVE_INT_TYPE LightComponentBase ::
    getNum_schedIn_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_schedIn_InputPort));
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE LightComponentBase ::
    getNum_textEventOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_textEventOut_OutputPort));
  }
#endif

  NATIVE_INT_TYPE LightComponentBase ::
    getNum_timeGetOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_timeGetOut_OutputPort));
  }

  NATIVE_INT_TYPE LightComponentBase ::
    getNum_timeIn_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_timeIn_InputPort));
  }

  NATIVE_INT_TYPE LightComponentBase ::
    getNum_varReq5In_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_varReq5In_InputPort));
  }

  // ----------------------------------------------------------------------
  // Port connection status queries
  // ----------------------------------------------------------------------

  bool LightComponentBase ::
    isConnected_BOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_BOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_BOut_OutputPort[portNum].isConnected();
  }

  bool LightComponentBase ::
    isConnected_FOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_FOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_FOut_OutputPort[portNum].isConnected();
  }

  bool LightComponentBase ::
    isConnected_UOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_UOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_UOut_OutputPort[portNum].isConnected();
  }

  bool LightComponentBase ::
    isConnected_eventOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_eventOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_eventOut_OutputPort[portNum].isConnected();
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  bool LightComponentBase ::
    isConnected_textEventOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_textEventOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_textEventOut_OutputPort[portNum].isConnected();
  }
#endif

  bool LightComponentBase ::
    isConnected_timeGetOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_timeGetOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_timeGetOut_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  Fw::Time LightComponentBase ::
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

  void LightComponentBase ::
    log_ACTIVITY_HI_LIGHTON(
        
    )
  {


    // Get the time
    Fw::Time _logTime;
    if (this->m_timeGetOut_OutputPort[0].isConnected()) {
       this->m_timeGetOut_OutputPort[0].invoke( _logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_LIGHTON;

    // Emit the event on the log port
    if (this->m_eventOut_OutputPort[0].isConnected()) {

      Fw::LogBuffer _logBuff;
#if FW_AMPCS_COMPATIBLE
      // for AMPCS, need to encode zero arguments
      Fw::SerializeStatus _zero_status = Fw::FW_SERIALIZE_OK;
      _zero_status = _logBuff.serialize(static_cast<U8>(0));
      FW_ASSERT(
          _zero_status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_zero_status)
      );
#endif


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
        "(%s) %s: Light on";
#else
      const char* _formatString =
        "%s: Light on";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
          _textBuffer,
          FW_LOG_TEXT_BUFFER_SIZE,
          _formatString,
#if FW_OBJECT_NAMES == 1
          this->m_objName,
#endif
          "LIGHTON "
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


  void LightComponentBase ::
    log_ACTIVITY_HI_LIGHTOFF(
        
    )
  {


    // Get the time
    Fw::Time _logTime;
    if (this->m_timeGetOut_OutputPort[0].isConnected()) {
       this->m_timeGetOut_OutputPort[0].invoke( _logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_LIGHTOFF;

    // Emit the event on the log port
    if (this->m_eventOut_OutputPort[0].isConnected()) {

      Fw::LogBuffer _logBuff;
#if FW_AMPCS_COMPATIBLE
      // for AMPCS, need to encode zero arguments
      Fw::SerializeStatus _zero_status = Fw::FW_SERIALIZE_OK;
      _zero_status = _logBuff.serialize(static_cast<U8>(0));
      FW_ASSERT(
          _zero_status == Fw::FW_SERIALIZE_OK,
          static_cast<FwAssertArgType>(_zero_status)
      );
#endif


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
        "(%s) %s: Light off";
#else
      const char* _formatString =
        "%s: Light off";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
          _textBuffer,
          FW_LOG_TEXT_BUFFER_SIZE,
          _formatString,
#if FW_OBJECT_NAMES == 1
          this->m_objName,
#endif
          "LIGHTOFF "
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

  void LightComponentBase ::
    m_p_schedIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    FW_ASSERT(callComp);
    LightComponentBase* compPtr = static_cast<LightComponentBase*>(callComp);
    compPtr->schedIn_handlerBase(portNum, context);
  }

  void LightComponentBase ::
    m_p_timeIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        F32 currentTime, F32 lastDetectedTime
    )
  {
    FW_ASSERT(callComp);
    LightComponentBase* compPtr = static_cast<LightComponentBase*>(callComp);
    compPtr->timeIn_handlerBase(portNum, currentTime, lastDetectedTime);
  }

  void LightComponentBase ::
    m_p_varReq5In_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum
    )
  {
    FW_ASSERT(callComp);
    LightComponentBase* compPtr = static_cast<LightComponentBase*>(callComp);
    compPtr->varReq5In_handlerBase(portNum);
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  // ----------------------------------------------------------------------

  void LightComponentBase ::
    schedIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_schedIn_InputPorts(),static_cast<FwAssertArgType>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->schedIn_handler(portNum, context);

  }

  void LightComponentBase ::
    timeIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        F32 currentTime, F32 lastDetectedTime
    )
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_timeIn_InputPorts(),static_cast<FwAssertArgType>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->timeIn_handler(portNum, currentTime, lastDetectedTime);

  }

  void LightComponentBase ::
    varReq5In_handlerBase(NATIVE_INT_TYPE portNum)
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_varReq5In_InputPorts(),static_cast<FwAssertArgType>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->varReq5In_handler(portNum);

  }

} // end namespace MotionActivatedLight
