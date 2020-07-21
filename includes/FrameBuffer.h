#ifndef FRAME_BUFFER_H
#define FRAME_BUFFER_H

class FrameBuffer{
    private:
        int width;
        int height;
        color* frame;

    public:
        FrameBuffer(int h, int w);
        // Function to set a pixel
        void setPixel(int row, int col, color c);
        // Function to write frame buffer to a file
        void writeBuffer();
        //Destructor
        ~FrameBuffer();
};

#endif