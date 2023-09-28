// ======================================================================
// \title  LightComponentAc.hpp
// \author Auto-generated
// \brief  hpp file for Light component base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef MOTIONACTIVATEDLIGHT_LIGHT_COMP_HPP_
#define MOTIONACTIVATEDLIGHT_LIGHT_COMP_HPP_

#include <FpConfig.hpp>
#include <Fw/Port/InputSerializePort.hpp>
#include <Fw/Port/OutputSerializePort.hpp>
#include <Fw/Comp/ActiveComponentBase.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortBPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortFPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortUPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/VarReqPortAc.hpp>

namespace MotionActivatedLight {

  //! \class LightComponentBase
  //! \brief Auto-generated base for Light component
  //!
  class LightComponentBase :
    public Fw::PassiveComponentBase
  {

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    //!
    friend class LightComponentBaseFriend;

  public:

    // ----------------------------------------------------------------------
    // Getters for typed input ports
    // ----------------------------------------------------------------------

    //! Get input port at index
    //!
    //! \return varReq5In[portNum]
    //!
    MotionActivatedLight::InputVarReqPort* get_varReq5In_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

  public:

    // ----------------------------------------------------------------------
    // Connect typed input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to BOut[portNum]
    //!
    void set_BOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        MotionActivatedLight::InputPortBPort *port /*!< The port*/
    );

    //! Connect port to FOut[portNum]
    //!
    void set_FOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        MotionActivatedLight::InputPortFPort *port /*!< The port*/
    );

    //! Connect port to UOut[portNum]
    //!
    void set_UOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        MotionActivatedLight::InputPortUPort *port /*!< The port*/
    );

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serialization input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to BOut[portNum]
    //!
    void set_BOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to FOut[portNum]
    //!
    void set_FOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to UOut[portNum]
    //!
    void set_UOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

#endif

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction, initialization, and destruction
    // ----------------------------------------------------------------------

    //! Construct a LightComponentBase object
    //!
    LightComponentBase(
        const char* compName = "" /*!< Component name*/
    );

  public:
    //! Initialize a LightComponentBase object
    //!
    void init(
        NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
    );

  PROTECTED:
    //! Destroy a LightComponentBase object
    //!
    virtual ~LightComponentBase();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for typed input ports
    // ----------------------------------------------------------------------

    //! Handler for input port varReq5In
    //
    virtual void varReq5In_handler(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for typed input ports.
    // ----------------------------------------------------------------------
    // Call these functions directly to bypass the corresponding ports.
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port varReq5In
    //!
    void varReq5In_handlerBase(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for typed output ports
    // ----------------------------------------------------------------------

    //! Invoke output port BOut
    //!
    void BOut_out(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        bool data, 
        U32 number 
    );

    //! Invoke output port FOut
    //!
    void FOut_out(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 data, 
        U32 number 
    );

    //! Invoke output port UOut
    //!
    void UOut_out(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        U32 data, 
        U32 number 
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of input ports
    // ----------------------------------------------------------------------

    //! Get the number of varReq5In input ports
    //!
    //! \return The number of varReq5In input ports
    //!
    NATIVE_INT_TYPE getNum_varReq5In_InputPorts();


    // ----------------------------------------------------------------------
    // Enumerations for number of ports
    // ----------------------------------------------------------------------

    enum {
       NUM_VARREQ5IN_INPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of output ports
    // ----------------------------------------------------------------------

    //! Get the number of BOut output ports
    //!
    //! \return The number of BOut output ports
    //!
    NATIVE_INT_TYPE getNum_BOut_OutputPorts();

    //! Get the number of FOut output ports
    //!
    //! \return The number of FOut output ports
    //!
    NATIVE_INT_TYPE getNum_FOut_OutputPorts();

    //! Get the number of UOut output ports
    //!
    //! \return The number of UOut output ports
    //!
    NATIVE_INT_TYPE getNum_UOut_OutputPorts();


    enum {
       NUM_BOUT_OUTPUT_PORTS = 1,
       NUM_FOUT_OUTPUT_PORTS = 1,
       NUM_UOUT_OUTPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for output ports
    // ----------------------------------------------------------------------

    //! Check whether port BOut is connected
    //!
    //! \return Whether port BOut is connected
    //!
    bool isConnected_BOut_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port FOut is connected
    //!
    //! \return Whether port FOut is connected
    //!
    bool isConnected_FOut_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port UOut is connected
    //!
    //! \return Whether port UOut is connected
    //!
    bool isConnected_UOut_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event logging functions
    // ----------------------------------------------------------------------



  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed input ports
    // ----------------------------------------------------------------------

    //! Input port varReq5In
    //!
    MotionActivatedLight::InputVarReqPort m_varReq5In_InputPort[NUM_VARREQ5IN_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed output ports
    // ----------------------------------------------------------------------

    //! Output port BOut
    //!
    MotionActivatedLight::OutputPortBPort m_BOut_OutputPort[NUM_BOUT_OUTPUT_PORTS];

    //! Output port FOut
    //!
    MotionActivatedLight::OutputPortFPort m_FOut_OutputPort[NUM_FOUT_OUTPUT_PORTS];

    //! Output port UOut
    //!
    MotionActivatedLight::OutputPortUPort m_UOut_OutputPort[NUM_UOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on typed input ports
    // ----------------------------------------------------------------------

    //! Callback for port varReq5In
    //!
    static void m_p_varReq5In_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );



  };

} // end namespace MotionActivatedLight
#endif
