#ifndef MAIN_MEMORY_H
#define MAIN_MEMORY_H

#endif // MAIN_MEMORY_H

#define MEM_SIZE        256;
#define MEM_WORD_LEN      8;

class MainMemory {
public:
    int getMemoryByte(int memAddress);
    void setMemoryByte(int memAddress, int memValue);
};
