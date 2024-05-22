# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# Source files
SRCS = main.cpp Battle.cpp Gaia.cpp Oceania.cpp Titan.cpp Player.cpp Prometheus.cpp Atlas.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = titan_battle

# Default target
all: $(EXEC)

# Link the object files to create the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)
	

# Compile each source file into an object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

	

# Clean up the build
clean:
	rm -f $(OBJS) $(EXEC)

# Phony targets
.PHONY: all clean
