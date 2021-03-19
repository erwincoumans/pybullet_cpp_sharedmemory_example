cmake_minimum_required(VERSION 3.0)

PROJECT(pybullet_cpp_sharedmemory)

cmake_minimum_required(VERSION 3.12)

SUBDIRS(src)


add_executable(pybullet_cpp_example pybullet_cpp_example.cpp)

target_link_libraries(pybullet_cpp_example PUBLIC pybullet_cpp)


