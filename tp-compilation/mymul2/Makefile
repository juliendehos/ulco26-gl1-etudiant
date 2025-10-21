CXXFLAGS= -Wall -Wextra -O2 
LDFLAGS= 

.PHONY: all clean

all: mul2.out

mul2.out: ./src/mul2.o ./src/main.o
	$(CXX) $^ $(CXXFLAGS) $(LDFLAGS) -o $@

clean: 
	rm -f *.out ./src/*.o

