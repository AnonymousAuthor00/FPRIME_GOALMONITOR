module MotionActivatedLight{
    passive component MotionSensor{
        sync input port varReq4In: VarReq
        sync input port varReq2In: VarReq
        output port BOut: PortB
        output port FOut: PortF
        output port UOut: PortU
    }
}