#ifndef MAIN_MEMORY_H
#define MAIN_MEMORY_H

#endif // MAIN_MEMORY_H

#define MEM_SIZE        256
#define MEM_WORD_LEN      8

class MainMemory {

    int mainMemory[MEM_SIZE];

public:
    void setMemoryByte(int memAddress, int memValue);
    int getMemoryByte(int memAddress);

};
