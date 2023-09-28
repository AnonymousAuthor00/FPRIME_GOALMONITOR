set(SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/instances.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/topology.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/exampleTopologyDefs.cpp"
)
set(MOD_DEPS
  Fw/Logger
  Svc/LinuxTime
  # Communication Implementations
  Drv/Udp
  Drv/TcpClient
)

register_fprime_module()