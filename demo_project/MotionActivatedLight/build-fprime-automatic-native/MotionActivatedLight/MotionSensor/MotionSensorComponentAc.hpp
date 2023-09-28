// ======================================================================
// \title  MotionSensorComponentAc.hpp
// \author Auto-generated
// \brief  hpp file for MotionSensor component base class
//
// NOTE: this file was automatically generated
//
// ======================================================================

#ifndef MOTIONACTIVATEDLIGHT_MOTIONSENSOR_COMP_HPP_
#define MOTIONACTIVATEDLIGHT_MOTIONSENSOR_COMP_HPP_

#include <FpConfig.hpp>
#include <Fw/Port/InputSerializePort.hpp>
#include <Fw/Port/OutputSerializePort.hpp>
#include <Fw/Comp/ActiveComponentBase.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortBPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortFPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortUPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/VarReqPortAc.hpp>
#include <MotionActivatedLight/TimePort/PortTimePortAc.hpp>
#include <Svc/Sched/SchedPortAc.hpp>

namespace MotionActivatedLight {

  //! \class MotionSensorComponentBase
  //! \brief Auto-generated base for MotionSensor component
  //!
  class MotionSensorComponentBase :
    public Fw::PassiveComponentBase
  {

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    //!
    friend class MotionSensorComponentBaseFriend;

  public:

    // ----------------------------------------------------------------------
    // Getters for typed input ports
    // ----------------------------------------------------------------------

    //! Get input port at index
    //!
    //! \return schedIn[portNum]
    //!
    Svc::InputSchedPort* get_schedIn_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Get input port at index
    //!
    //! \return varReq2In[portNum]
    //!
    MotionActivatedLight::InputVarReqPort* get_varReq2In_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Get input port at index
    //!
    //! \return varReq4In[portNum]
    //!
    MotionActivatedLight::InputVarReqPort* get_varReq4In_InputPort(
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

    //! Connect port to timeOut[portNum]
    //!
    void set_timeOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        MotionActivatedLight::InputPortTimePort *port /*!< The port*/
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

    //! Connect port to timeOut[portNum]
    //!
    void set_timeOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

#endif

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction, initialization, and destruction
    // ----------------------------------------------------------------------

    //! Construct a MotionSensorComponentBase object
    //!
    MotionSensorComponentBase(
        const char* compName = "" /*!< Component name*/
    );

  public:
    //! Initialize a MotionSensorComponentBase object
    //!
    void init(
        NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
    );

  PROTECTED:
    //! Destroy a MotionSensorComponentBase object
    //!
    virtual ~MotionSensorComponentBase();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for typed input ports
    // ----------------------------------------------------------------------

    //! Handler for input port schedIn
    //
    virtual void schedIn_handler(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< 
      The call order
      */
    ) = 0;

    //! Handler for input port varReq2In
    //
    virtual void varReq2In_handler(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    ) = 0;

    //! Handler for input port varReq4In
    //
    virtual void varReq4In_handler(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for typed input ports.
    // ----------------------------------------------------------------------
    // Call these functions directly to bypass the corresponding ports.
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port schedIn
    //!
    void schedIn_handlerBase(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< 
      The call order
      */
    );

    //! Handler base-class function for input port varReq2In
    //!
    void varReq2In_handlerBase(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Handler base-class function for input port varReq4In
    //!
    void varReq4In_handlerBase(
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

    //! Invoke output port timeOut
    //!
    void timeOut_out(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 currentTime, 
        F32 lastDetectedTime 
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of input ports
    // ----------------------------------------------------------------------

    //! Get the number of schedIn input ports
    //!
    //! \return The number of schedIn input ports
    //!
    NATIVE_INT_TYPE getNum_schedIn_InputPorts();

    //! Get the number of varReq2In input ports
    //!
    //! \return The number of varReq2In input ports
    //!
    NATIVE_INT_TYPE getNum_varReq2In_InputPorts();

    //! Get the number of varReq4In input ports
    //!
    //! \return The number of varReq4In input ports
    //!
    NATIVE_INT_TYPE getNum_varReq4In_InputPorts();


    // ----------------------------------------------------------------------
    // Enumerations for number of ports
    // ----------------------------------------------------------------------

    enum {
       NUM_SCHEDIN_INPUT_PORTS = 1,
       NUM_VARREQ2IN_INPUT_PORTS = 1,
       NUM_VARREQ4IN_INPUT_PORTS = 1,
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

    //! Get the number of timeOut output ports
    //!
    //! \return The number of timeOut output ports
    //!
    NATIVE_INT_TYPE getNum_timeOut_OutputPorts();


    enum {
       NUM_BOUT_OUTPUT_PORTS = 1,
       NUM_FOUT_OUTPUT_PORTS = 1,
       NUM_UOUT_OUTPUT_PORTS = 1,
       NUM_TIMEOUT_OUTPUT_PORTS = 1,
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

    //! Check whether port timeOut is connected
    //!
    //! \return Whether port timeOut is connected
    //!
    bool isConnected_timeOut_OutputPort(
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

    //! Input port schedIn
    //!
    Svc::InputSchedPort m_schedIn_InputPort[NUM_SCHEDIN_INPUT_PORTS];

    //! Input port varReq2In
    //!
    MotionActivatedLight::InputVarReqPort m_varReq2In_InputPort[NUM_VARREQ2IN_INPUT_PORTS];

    //! Input port varReq4In
    //!
    MotionActivatedLight::InputVarReqPort m_varReq4In_InputPort[NUM_VARREQ4IN_INPUT_PORTS];

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

    //! Output port timeOut
    //!
    MotionActivatedLight::OutputPortTimePort m_timeOut_OutputPort[NUM_TIMEOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on typed input ports
    // ----------------------------------------------------------------------

    //! Callback for port schedIn
    //!
    static void m_p_schedIn_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< 
      The call order
      */
    );

    //! Callback for port varReq2In
    //!
    static void m_p_varReq2In_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Callback for port varReq4In
    //!
    static void m_p_varReq4In_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );



  };

} // end namespace MotionActivatedLight
#endif
