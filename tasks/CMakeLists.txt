# Generated from orogen/lib/orogen/templates/tasks/CMakeLists.txt

include(gyro_compensatedTaskLib)
ADD_LIBRARY(${GYRO_COMPENSATED_TASKLIB_NAME} SHARED 
    ${GYRO_COMPENSATED_TASKLIB_SOURCES})
add_dependencies(${GYRO_COMPENSATED_TASKLIB_NAME}
    regen-typekit)

TARGET_LINK_LIBRARIES(${GYRO_COMPENSATED_TASKLIB_NAME}
    ${OrocosRTT_LIBRARIES}
    ${GYRO_COMPENSATED_TASKLIB_DEPENDENT_LIBRARIES})
SET_TARGET_PROPERTIES(${GYRO_COMPENSATED_TASKLIB_NAME}
    PROPERTIES LINK_INTERFACE_LIBRARIES "${GYRO_COMPENSATED_TASKLIB_INTERFACE_LIBRARIES}")
SET_TARGET_PROPERTIES(${GYRO_COMPENSATED_TASKLIB_NAME}
    PROPERTIES INTERFACE_LINK_LIBRARIES "${GYRO_COMPENSATED_TASKLIB_INTERFACE_LIBRARIES}")

INSTALL(TARGETS ${GYRO_COMPENSATED_TASKLIB_NAME}
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib/orocos)

INSTALL(FILES ${GYRO_COMPENSATED_TASKLIB_HEADERS}
    DESTINATION include/orocos/gyro_compensated)

