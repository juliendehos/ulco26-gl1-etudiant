CXXFLAGS= -Wall -Wextra -O2 
LDFLAGS= 

.PHONY: all clean

all: mul2.out tests.out

mul2.out: ./src/mul2.o ./src/main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

tests.out: ./src/mul2.o ./src/tests.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean: 
	rm -f *.out ./src/*.o

