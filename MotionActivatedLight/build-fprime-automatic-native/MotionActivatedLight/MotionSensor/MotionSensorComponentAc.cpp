// ======================================================================
// \title  MotionSensorComponentAc.cpp
// \author Auto-generated
// \brief  cpp file for MotionSensor component base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#include <cstdio>
#include <FpConfig.hpp>
#include <MotionActivatedLight/MotionSensor/MotionSensorComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#if FW_ENABLE_TEXT_LOGGING
#include <Fw/Types/String.hpp>
#endif


namespace MotionActivatedLight {

  // ----------------------------------------------------------------------
  // Getters for numbers of input ports
  // ----------------------------------------------------------------------

  MotionActivatedLight::InputVarReqPort *MotionSensorComponentBase ::
    get_varReq2In_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_varReq2In_InputPorts(),static_cast<FwAssertArgType>(portNum));
    return &this->m_varReq2In_InputPort[portNum];
  }

  MotionActivatedLight::InputVarReqPort *MotionSensorComponentBase ::
    get_varReq4In_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_varReq4In_InputPorts(),static_cast<FwAssertArgType>(portNum));
    return &this->m_varReq4In_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Typed connectors for output ports
  // ----------------------------------------------------------------------

  void MotionSensorComponentBase ::
    set_BOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        MotionActivatedLight::InputPortBPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_BOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_BOut_OutputPort[portNum].addCallPort(port);
  }

  void MotionSensorComponentBase ::
    set_FOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        MotionActivatedLight::InputPortFPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_FOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_FOut_OutputPort[portNum].addCallPort(port);
  }

  void MotionSensorComponentBase ::
    set_UOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        MotionActivatedLight::InputPortUPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_UOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_UOut_OutputPort[portNum].addCallPort(port);
  }

  // ----------------------------------------------------------------------
  // Serialization connectors for output ports
  // ----------------------------------------------------------------------

#if FW_PORT_SERIALIZATION

  void MotionSensorComponentBase ::
    set_BOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_BOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_BOut_OutputPort[portNum].registerSerialPort(port);
  }

  void MotionSensorComponentBase ::
    set_FOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_FOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_FOut_OutputPort[portNum].registerSerialPort(port);
  }

  void MotionSensorComponentBase ::
    set_UOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_UOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    return this->m_UOut_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  // ----------------------------------------------------------------------
  // Component construction, initialization, and destruction
  // ----------------------------------------------------------------------

    MotionSensorComponentBase :: MotionSensorComponentBase(const char* compName) :
        Fw::PassiveComponentBase(compName) {



  }

  void MotionSensorComponentBase ::
    init(NATIVE_INT_TYPE instance)
  {

    // Initialize base class
    Fw::PassiveComponentBase::init(instance);

    // Connect input port varReq2In
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_varReq2In_InputPorts());
        port++
    ) {

      this->m_varReq2In_InputPort[port].init();
      this->m_varReq2In_InputPort[port].addCallComp(
          this,
          m_p_varReq2In_in
      );
      this->m_varReq2In_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_varReq2In_InputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_varReq2In_InputPort[port].setObjName(portName);
#endif

    }

    // Connect input port varReq4In
    for (
        PlatformIntType port = 0;
        port < static_cast<PlatformIntType>(this->getNum_varReq4In_InputPorts());
        port++
    ) {

      this->m_varReq4In_InputPort[port].init();
      this->m_varReq4In_InputPort[port].addCallComp(
          this,
          m_p_varReq4In_in
      );
      this->m_varReq4In_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_varReq4In_InputPort[%" PRI_PlatformIntType "]",
          this->m_objName,
          port
      );
      this->m_varReq4In_InputPort[port].setObjName(portName);
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


  }

  MotionSensorComponentBase::
    ~MotionSensorComponentBase() {

  }

  // ----------------------------------------------------------------------
  // Invocation functions for output ports
  // ----------------------------------------------------------------------

  void MotionSensorComponentBase ::
    BOut_out(
        NATIVE_INT_TYPE portNum,
        bool data, U32 number
    )
  {
    FW_ASSERT(portNum < this->getNum_BOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_BOut_OutputPort[portNum].invoke(data, number);
  }

  void MotionSensorComponentBase ::
    FOut_out(
        NATIVE_INT_TYPE portNum,
        F32 data, U32 number
    )
  {
    FW_ASSERT(portNum < this->getNum_FOut_OutputPorts(),static_cast<FwAssertArgType>(portNum));
    this->m_FOut_OutputPort[portNum].invoke(data, number);
  }

  void MotionSensorComponentBase ::
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

  NATIVE_INT_TYPE MotionSensorComponentBase ::
    getNum_BOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_BOut_OutputPort));
  }

  NATIVE_INT_TYPE MotionSensorComponentBase ::
    getNum_FOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_FOut_OutputPort));
  }

  NATIVE_INT_TYPE MotionSensorComponentBase ::
    getNum_UOut_OutputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_UOut_OutputPort));
  }

  NATIVE_INT_TYPE MotionSensorComponentBase ::
    getNum_varReq2In_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_varReq2In_InputPort));
  }

  NATIVE_INT_TYPE MotionSensorComponentBase ::
    getNum_varReq4In_InputPorts()
  {
    return static_cast<NATIVE_INT_TYPE>(FW_NUM_ARRAY_ELEMENTS(this->m_varReq4In_InputPort));
  }

  // ----------------------------------------------------------------------
  // Port connection status queries
  // ----------------------------------------------------------------------

  bool MotionSensorComponentBase ::
    isConnected_BOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_BOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_BOut_OutputPort[portNum].isConnected();
  }

  bool MotionSensorComponentBase ::
    isConnected_FOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_FOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_FOut_OutputPort[portNum].isConnected();
  }

  bool MotionSensorComponentBase ::
    isConnected_UOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_UOut_OutputPorts(),
        static_cast<FwAssertArgType>(portNum)
     );
     return this->m_UOut_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Calls for invocations received on typed input ports
  // ----------------------------------------------------------------------

  void MotionSensorComponentBase ::
    m_p_varReq2In_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum
    )
  {
    FW_ASSERT(callComp);
    MotionSensorComponentBase* compPtr = static_cast<MotionSensorComponentBase*>(callComp);
    compPtr->varReq2In_handlerBase(portNum);
  }

  void MotionSensorComponentBase ::
    m_p_varReq4In_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum
    )
  {
    FW_ASSERT(callComp);
    MotionSensorComponentBase* compPtr = static_cast<MotionSensorComponentBase*>(callComp);
    compPtr->varReq4In_handlerBase(portNum);
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  // ----------------------------------------------------------------------

  void MotionSensorComponentBase ::
    varReq2In_handlerBase(NATIVE_INT_TYPE portNum)
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_varReq2In_InputPorts(),static_cast<FwAssertArgType>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->varReq2In_handler(portNum);

  }

  void MotionSensorComponentBase ::
    varReq4In_handlerBase(NATIVE_INT_TYPE portNum)
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_varReq4In_InputPorts(),static_cast<FwAssertArgType>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->varReq4In_handler(portNum);

  }

} // end namespace MotionActivatedLight
