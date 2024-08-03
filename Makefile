CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++11

SRCS = $(wildcard src/*.cpp)

TARGET = calculator

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)
