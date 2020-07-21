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
    std::ofstream fout;

    fout.open("outputs/output.ppm");
    fout<<"P3\n";
    fout<<width<<" "<<height<<"\n";
    fout<<"255"<<"\n";

    int i, j;
    for (i = 0; i < height; i++)
        for (j = 0; j < width; j++)
            fout << static_cast<int>(frame[i * width + j].x()*255.999) << " " << static_cast<int>(frame[i * width + j].y()*255.999) << " " << static_cast<int>(frame[i * width + j].z()*255.999) << "\n";
}

//Destructor
FrameBuffer::~FrameBuffer()
{
    free(frame);
}
