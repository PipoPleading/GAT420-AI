#pragma once
#include "Environment.h"

class GameOfLife : public Environment
{
    //Make sure it contains the Constructor and overrides Initialize, Step, and KeyDown methods.
    //It will keep track of the current frame and contain two buffers, one to read from and one to write to.

    GameOfLife(); 

    bool Initialize() override = 0;
    void Step() override = 0;

    void KeyDown(SDL_Keycode keycode) override;

    int frame{ 0 };
    std::vector<uint8_t> bufferA;
    std::vector<uint8_t> bufferB;

    //In the Initialize() method, resize both buffer A and B to the number of cells(size.x* size.y)
    //In the Step() method, the two buffers will switch their usage as read and write buffers.
    //The read / write reference will refer to the buffers currently being used for read and write

    //frame++;
    //std::vector<uint8_t>& readBuffer = (<buffer determined if frame is even or odd>) ? bufferA : bufferB;
    //std::vector<uint8_t>& writeBuffer = (<buffer determined if frame is even or odd>) ? bufferB : bufferA;

};