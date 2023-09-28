module MotionActivatedLight{
    passive component Light{
        sync input port varReq5In: VarReq
        output port BOut: PortB
        output port FOut: PortF
        output port UOut: PortU
        sync input port schedIn: Svc.Sched
        sync input port timeIn: PortTime
        event port eventOut
        text event port textEventOut
        time get port timeGetOut
        event LIGHTON() \
            severity activity high \
            id 0 \
            format "Light on"
        event LIGHTOFF() \
            severity activity high \
            id 1 \
            format "Light off"
    }
}