#ifndef FRAME_BUFFER_H
#define FRAME_BUFFER_H

#include "vec3.h"
#include <fstream>

class FrameBuffer{
    private:
        int width;
        int height;
        color* frame;

    public:
        FrameBuffer(int h, int w){
            height=h;
            widht=w;
            frame=new color[height*width];
        }

        // Function to set a pixel
        void setPixel(int row, int col, color c){
            frame[row*width+col]=c;
        }

        // Function to write frame buffer to a file
        void writeBuffer(){
            ofstream fout;
            
            fout.open("output.ppm");
            int i,j;
            for(i=0;i<height;i++)
                for(j=0;j<width;j++)
                    fout<<frame[i*width+j].r<<" "<<frame[i*width+j].g<<" "<<frame[i*width+j].b<<endl;

        }
}



#endif