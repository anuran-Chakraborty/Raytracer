#include "FrameBuffer.h"
#include <fstream>

FrameBuffer::FrameBuffer(int h, int w)
{
    height = h;
    width = w;
    frame = new color[height * width];
}

// Function to set a pixel
void FrameBuffer::setPixel(int row, int col, color c)
{
    frame[row * width + col] = c;
}

// Function to write frame buffer to a file
void FrameBuffer::writeBuffer()
{
    ofstream fout;

    fout.open("outputs/output.ppm");
    int i, j;
    for (i = 0; i < height; i++)
        for (j = 0; j < width; j++)
            fout << static_cast<int>(frame[i * width + j].x()) << " " << static_cast<int>(frame[i * width + j].y()) << " " << static_cast<int>(frame[i * width + j].z()) << endl;
}

//Destructor
FrameBuffer::~FrameBuffer()
{
    free(frame);
}
}