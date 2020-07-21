#include "FrameBuffer.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    FrameBuffer fb(256,256);

    // Write a sample frame buffer
    int i,j;
    for(i=0;i<256;i++)
        for(j=0;j<256;j++)
        {
            color c((double)i/255.0,(double)j/255.0,0.25);
        }

    return 0;
}
