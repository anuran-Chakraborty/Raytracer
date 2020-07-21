# Define the compiler
CC=g++

# Add headers directory
INCLUDE_DIR=includes/
BUILD_DIR=build/
SOURCE_DIR=src/

# Add flags
C_FLAGS=-c -Wall -I

# Define targets
all: final

final: main.o Vec3.o FrameBuffer.o
		$(CC) $(BUILD_DIR)main.o $(BUILD_DIR)Vec3.o $(BUILD_DIR)FrameBuffer.o -o bin.exe

main.o: $(SOURCE_DIR)main.cpp
		$(CC) -o $(BUILD_DIR)main.o $(C_FLAGS) $(INCLUDE_DIR) $(SOURCE_DIR)main.cpp

FrameBuffer.o: $(SOURCE_DIR)FrameBuffer.cpp Vec3.o
		$(CC) -o $(BUILD_DIR)FrameBuffer.o $(C_FLAGS) $(INCLUDE_DIR) $(SOURCE_DIR)FrameBuffer.cpp 

Vec3.o: $(SOURCE_DIR)Vec3.cpp
		$(CC) -o $(BUILD_DIR)Vec3.o $(C_FLAGS) $(INCLUDE_DIR) $(SOURCE_DIR)Vec3.cpp

clean:
		rm -rf $(BUILD_DIR)*o