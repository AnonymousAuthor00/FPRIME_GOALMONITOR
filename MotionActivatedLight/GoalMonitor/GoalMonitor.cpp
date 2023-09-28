// ======================================================================
// \title  GoalMonitor.cpp
// \author fprime
// \brief  cpp file for GoalMonitor component implementation class
// ======================================================================


#include <MotionActivatedLight/GoalMonitor/GoalMonitor.hpp>
#include <FpConfig.hpp>
#include <map>

namespace MotionActivatedLight {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  GoalMonitor ::
    GoalMonitor(
        const char *const compName
    ) : GoalMonitorComponentBase(compName)
  {
    this->turnOn = false;
    mapB[1] = &turnOn;
    this->currentTime = 0.0;
    mapF[3] = &currentTime;
    this->lastDetectionTime = 0.0;
    mapF[2] = &lastDetectionTime;
    this->detected = false;
    mapB[0] = &detected;
    this->detectionThreshold = 0.0;
    mapF[1] = &detectionThreshold;
    this->targetDistance = 0.0;
    mapF[0] = &targetDistance;
    this->goal5 = false;
    this->goal4 = false;
    this->goal3 = false;
    this->goal2 = false;
    this->goal1 = false;

  }

  GoalMonitor ::
    ~GoalMonitor()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void GoalMonitor ::
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

  void GoalMonitor ::
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

  void GoalMonitor ::
    UIn_handler(
        const NATIVE_INT_TYPE portNum,
        U32 data,
        U32 number
    )
  {
    // TODO
  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void GoalMonitor ::
    monitor_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    varReq2Out_out(0);
    varReq4Out_out(0);
    varReq5Out_out(0);
    goalSatisfactionCheck();
    this->cmdResponse_out(opCode,cmdSeq,Fw::CmdResponse::OK);
  }

  void GoalMonitor ::
    goalSatisfactionCheck(){
        // goal check function
        this->goal5 = ((lastDetectionTime-currentTime)<=5)==(this->turnOn);
        if(this->goal5){
          this->log_ACTIVITY_HI_SATISFIED(5);
        }else{
          this->log_ACTIVITY_HI_NOTSATISFIED(5);
        }
        this->goal4 = !(detected)||((detected)&&((this->lastDetectionTime==this->currentTime)));
        if(this->goal4){
          this->log_ACTIVITY_HI_SATISFIED(4);
        }else{
          this->log_ACTIVITY_HI_NOTSATISFIED(4);
        }
        this->goal3 = this->goal4 && this->goal5;
        if(this->goal3){
          this->log_ACTIVITY_HI_SATISFIED(3);
        }else{
          this->log_ACTIVITY_HI_NOTSATISFIED(3);
        }
        this->goal2 = !(this->targetDistance>this->detectionThreshold)||((this->targetDistance>this->detectionThreshold)&&((this->detected)));
        if(this->goal2){
          this->log_ACTIVITY_HI_SATISFIED(2);
        }else{
          this->log_ACTIVITY_HI_NOTSATISFIED(2);
        }
        this->goal1 = this->goal2 && this->goal3;
        if(this->goal1){
          this->log_ACTIVITY_HI_SATISFIED(1);
        }else{
          this->log_ACTIVITY_HI_NOTSATISFIED(1);
        }
    }

} // end namespace MotionActivatedLight
