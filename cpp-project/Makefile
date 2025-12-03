CXX = g++
CXXFLAGS = -Wall -Iinclude
TARGET = bin/main

$(TARGET): src/main.cpp src/utils.cpp
	@mkdir -p bin
	$(CXX) $(CXXFLAGS) src/main.cpp src/utils.cpp -o $(TARGET)

clean:
	rm -rf bin

.PHONY: clean