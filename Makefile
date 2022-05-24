CXX = g++

SRC_PATH = ./src
BUILD_PATH = ./build

vpath %.cpp ./src
vpath %.out ./build


all: main.out

main.out: main.cpp
	$(CXX) $(CXXFLAGS) $? -o $(BUILD_PATH)/$@

clean:
	rm -rf $(BUILD_PATH)/*
	

