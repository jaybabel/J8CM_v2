// J8CM v2 Main Memory Object
// 256 memory locations

#include "main_memory.h"

void MainMemory::setMemoryByte(int memAddress, int memValue) {

//    for (int i=0; i<8; ++i) {
//        mainMemory[memAddress][i] = memValue / 2;
//    }
    mainMemory[memAddress] = memValue;
}

int MainMemory::getMemoryByte(int memAddress) {
    return(mainMemory[memAddress]);
}
