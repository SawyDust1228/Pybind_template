set(TARGET_NAME package)

file(GLOB SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)
# generate cpython lib
pybind11_add_module(${TARGET_NAME} ${SOURCE_FILES})
# install
install(TARGETS ${TARGET_NAME} DESTINATION ${CMAKE_INSTALL_RPATH})