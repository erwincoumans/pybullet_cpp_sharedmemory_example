# Hello PyBullet CPP example

A minimal example showing how to use PyBullet from C++ over shared memory.

In on terminal run a PyBullet GUI server using:
```
pip3 install pybullet --upgrade
python3 -m pybullet_utils.runServer
```
Then in another terminal compile the C++ code and run the client using:
```
mkdir build
cd build
cmake ..
cmake --build . --config Release
Release\pybullet_cpp_example.exe or ./pybullet_cpp_example
```
