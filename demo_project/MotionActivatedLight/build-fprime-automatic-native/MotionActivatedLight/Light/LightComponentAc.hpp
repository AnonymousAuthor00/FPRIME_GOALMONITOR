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
#include <Fw/Time/TimePortAc.hpp>
#include <Fw/Log/LogString.hpp>
#include <Fw/Log/LogSeverityEnumAc.hpp>
#include <Fw/Log/LogBuffer.hpp>
#include <Fw/Time/Time.hpp>
#include <Fw/Log/TextLogString.hpp>
#include <Fw/Log/LogBuffer.hpp>
#include <Fw/Time/Time.hpp>
#include <Fw/Log/TextLogString.hpp>
#include <Fw/Time/Time.hpp>
#include <Fw/Time/Time.hpp>
#include <Fw/Log/LogPortAc.hpp>
#if FW_ENABLE_TEXT_LOGGING == 1
#include <Fw/Log/LogTextPortAc.hpp>
#endif
#include <Fw/Time/TimePortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortBPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortFPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/PortUPortAc.hpp>
#include <MotionActivatedLight/GoalMonitorPort/VarReqPortAc.hpp>
#include <MotionActivatedLight/TimePort/PortTimePortAc.hpp>
#include <Svc/Sched/SchedPortAc.hpp>

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
    //! \return schedIn[portNum]
    //!
    Svc::InputSchedPort* get_schedIn_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Get input port at index
    //!
    //! \return timeIn[portNum]
    //!
    MotionActivatedLight::InputPortTimePort* get_timeIn_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

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

    //! Handler for input port schedIn
    //
    virtual void schedIn_handler(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< 
      The call order
      */
    ) = 0;

    //! Handler for input port timeIn
    //
    virtual void timeIn_handler(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 currentTime, 
        F32 lastDetectedTime 
    ) = 0;

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

    //! Handler base-class function for input port schedIn
    //!
    void schedIn_handlerBase(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< 
      The call order
      */
    );

    //! Handler base-class function for input port timeIn
    //!
    void timeIn_handlerBase(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 currentTime, 
        F32 lastDetectedTime 
    );

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

    //! Get the number of schedIn input ports
    //!
    //! \return The number of schedIn input ports
    //!
    NATIVE_INT_TYPE getNum_schedIn_InputPorts();

    //! Get the number of timeIn input ports
    //!
    //! \return The number of timeIn input ports
    //!
    NATIVE_INT_TYPE getNum_timeIn_InputPorts();

    //! Get the number of varReq5In input ports
    //!
    //! \return The number of varReq5In input ports
    //!
    NATIVE_INT_TYPE getNum_varReq5In_InputPorts();


    // ----------------------------------------------------------------------
    // Enumerations for number of ports
    // ----------------------------------------------------------------------

    enum {
       NUM_SCHEDIN_INPUT_PORTS = 1,
       NUM_TIMEIN_INPUT_PORTS = 1,
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


    enum {
       NUM_BOUT_OUTPUT_PORTS = 1,
       NUM_FOUT_OUTPUT_PORTS = 1,
       NUM_UOUT_OUTPUT_PORTS = 1,
       NUM_EVENTOUT_OUTPUT_PORTS = 1,
       NUM_TEXTEVENTOUT_OUTPUT_PORTS = 1,
       NUM_TIMEGETOUT_OUTPUT_PORTS = 1,
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

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event IDs
    // ----------------------------------------------------------------------

    enum {
      EVENTID_LIGHTON = 0x0, /*  */
      EVENTID_LIGHTOFF = 0x1, /*  */
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event logging functions
    // ----------------------------------------------------------------------

    //! Log event LIGHTON
    //!
    void log_ACTIVITY_HI_LIGHTON(

    );


    //! Log event LIGHTOFF
    //!
    void log_ACTIVITY_HI_LIGHTOFF(

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

    //! Input port schedIn
    //!
    Svc::InputSchedPort m_schedIn_InputPort[NUM_SCHEDIN_INPUT_PORTS];

    //! Input port timeIn
    //!
    MotionActivatedLight::InputPortTimePort m_timeIn_InputPort[NUM_TIMEIN_INPUT_PORTS];

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

    //! Callback for port timeIn
    //!
    static void m_p_timeIn_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 currentTime, 
        F32 lastDetectedTime 
    );

    //! Callback for port varReq5In
    //!
    static void m_p_varReq5In_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );


  PRIVATE:
    // ----------------------------------------------------------------------
    // Counter values for event throttling
    // ----------------------------------------------------------------------

  };

} // end namespace MotionActivatedLight
#endif
