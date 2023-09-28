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

  // ----------------------------------------------------------------------
  // Calls for invocations received on typed input ports
  // ----------------------------------------------------------------------

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
    varReq5In_handlerBase(NATIVE_INT_TYPE portNum)
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_varReq5In_InputPorts(),static_cast<FwAssertArgType>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->varReq5In_handler(portNum);

  }

} // end namespace MotionActivatedLight
