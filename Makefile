TARGET = sprawozdanie_2

CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRCS = AddToList.cpp LinkedList.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)