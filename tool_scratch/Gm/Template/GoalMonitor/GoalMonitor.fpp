module example{
    active component GoalMonitor{
        command recv port cmdIn
        command reg port cmdRegOut
        command resp port cmdResponseOut
        event port eventOut
        text event port textEventOut
        time get port timeGetOut
        sync input port BIn: PortB
        sync input port FIn: PortF
        sync input port UIn: PortU
        async command monitor()
        event SATISFIED(number: U32) \
            severity activity high \
            id 0 \
            format "Goal No.{d} satisfied"
        event NOTSATISFIED(number: U32) \
            severity activity high \
            id 1 \
            format "Goal No.{d} not satisfied"
        event RECVB(
                    number: U32
                    value: bool
                    ) \
            severity activity high \
            id 2 \
            format "Boolean variable No.{d} received: {}"
        event RECVF(
                    number: U32
                    value: F32
                    ) \
            severity activity high \
            id 3 \
            format "Float variable No.{d} received: {}"
        event RECVU(
                    number: U32
                    value: U32
                    ) \
            severity activity high \
            id 4 \
            format "Integer variable No.{d} received: {}"
    }
}