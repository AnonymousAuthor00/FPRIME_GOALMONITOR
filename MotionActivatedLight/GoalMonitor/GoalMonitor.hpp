// ======================================================================
// \title  GoalMonitor.hpp
// \author fprime
// \brief  hpp file for GoalMonitor component implementation class
// ======================================================================

#ifndef GoalMonitor_HPP
#define GoalMonitor_HPP
#include <map>

#include "MotionActivatedLight/GoalMonitor/GoalMonitorComponentAc.hpp"

namespace MotionActivatedLight {

  class GoalMonitor :
    public GoalMonitorComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object GoalMonitor
      //!
      GoalMonitor(
          const char *const compName /*!< The component name*/
      );

      //! Destroy object GoalMonitor
      //!
      ~GoalMonitor();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------
      bool goal5;
      bool turnOn;
      F32 currentTime;
      F32 lastDetectionTime;
      bool detected;
      F32 detectionThreshold;
      F32 targetDistance;
      bool goal4;
      bool goal3;
      bool goal2;
      bool goal1;
      std::map<int, bool*> mapB;
      std::map<int, float*> mapF;

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

} // end namespace MotionActivatedLight

#endif
