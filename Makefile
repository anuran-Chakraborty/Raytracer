# Define the compiler
CC=g++

# Add headers directory
INCLUDE_DIR=includes/
BUILD_DIR=build/
SOURCE_DIR=src/

# Add flags
C_FLAGS=-c -Wall -I

# Define targets
all: builddir final

builddir:
		mkdir build	

final: main.o Vec3.o FrameBuffer.o Ray.o Camera.o Utils.o
		$(CC) $(BUILD_DIR)main.o $(BUILD_DIR)Vec3.o $(BUILD_DIR)FrameBuffer.o $(BUILD_DIR)Ray.o $(BUILD_DIR)Camera.o $(BUILD_DIR)Utils.o -o bin.exe

main.o: $(SOURCE_DIR)main.cpp
		$(CC) -o $(BUILD_DIR)main.o $(C_FLAGS) $(INCLUDE_DIR) $(SOURCE_DIR)main.cpp

Utils.o: $(SOURCE_DIR)Utils.cpp
		$(CC) -o $(BUILD_DIR)Utils.o $(C_FLAGS) $(INCLUDE_DIR) $(SOURCE_DIR)Utils.cpp

Camera.o: $(SOURCE_DIR)Camera.cpp
		$(CC) -o $(BUILD_DIR)Camera.o $(C_FLAGS) $(INCLUDE_DIR) $(SOURCE_DIR)Camera.cpp

Ray.o: $(SOURCE_DIR)ray.cpp
		$(CC) -o $(BUILD_DIR)Ray.o $(C_FLAGS) $(INCLUDE_DIR) $(SOURCE_DIR)Ray.cpp

FrameBuffer.o: $(SOURCE_DIR)FrameBuffer.cpp
		$(CC) -o $(BUILD_DIR)FrameBuffer.o $(C_FLAGS) $(INCLUDE_DIR) $(SOURCE_DIR)FrameBuffer.cpp 

Vec3.o: $(SOURCE_DIR)Vec3.cpp
		$(CC) -o $(BUILD_DIR)Vec3.o $(C_FLAGS) $(INCLUDE_DIR) $(SOURCE_DIR)Vec3.cpp

clean:
		rm -r $(BUILD_DIR)