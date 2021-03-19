file(GLOB_RECURSE pybullet_cpp_SRC CONFIGURE_DEPENDS "*.h" "*.cpp")

MESSAGE(${pybullet_cpp_SRC})

add_library(pybullet_cpp ${pybullet_cpp_SRC})
target_include_directories(pybullet_cpp PUBLIC .)
target_compile_definitions(pybullet_cpp PUBLIC -DBT_USE_DOUBLE_PRECISION)


