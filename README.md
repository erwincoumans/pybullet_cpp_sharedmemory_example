# Hello PyBullet CPP example

A minimal example showing how to use PyBullet from C++ over shared memory.

In on terminal run a PyBullet GUI server using:
```
pip3 install pybullet==3.1.0
python3 -m pybullet_utils.runServer
```

Install [Visual Studio 2019 Community Edition](https://visualstudio.microsoft.com/vs/community/) in the default location and also a git client such as [TortoiseGit](https://tortoisegit.org) and [cmake](https://cmake.org).
Then run this command to open a x64 terminal, <WINDOWS_KEY>+R, copy this command into the RUN window and hit enter:
```
%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"
```
Now you should be in a "Visual Studio 2019 Developer Command Prompt"
Compile the C++ code and run the client using:
```
git clone https://github.com/erwincoumans/pybullet_cpp_sharedmemory_example
cd pybullet_cpp_sharedmemory_example
mkdir build
cd build
cmake ..
cmake --build . --config Release
Release\pybullet_cpp_example.exe or ./pybullet_cpp_example
```
