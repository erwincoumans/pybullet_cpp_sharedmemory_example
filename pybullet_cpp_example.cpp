#include "SharedMemory/b3RobotSimulatorClientAPI_NoDirect.h"
#include "SharedMemory/PhysicsClientSharedMemory_C_API.h"
#include "SharedMemory/b3RobotSimulatorClientAPI_InternalData.h"
#include <vector>

int main()
{
    b3PhysicsClientHandle client = b3ConnectSharedMemory(SHARED_MEMORY_KEY);
    if (!b3CanSubmitCommand(client))
    {
        printf("Not connected, start a PyBullet server first, using python -m pybullet_utils.runServer\n");
        exit(0);
    }
    b3RobotSimulatorClientAPI_InternalData data;
    data.m_physicsClientHandle = client;
    data.m_guiHelper = 0;
    b3RobotSimulatorClientAPI_NoDirect api;
    api.setInternalData(&data);
    api.resetSimulation();

    int plane = api.loadURDF("plane.urdf");
    
    
}
