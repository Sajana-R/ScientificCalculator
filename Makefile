CXX = clang++
CXXFLAGS = -Wall -std=c++17

calculator: main.o Calculator.o
	$(CXX) $(CXXFLAGS) main.o Calculator.o -o calculator

main.o: main.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Calculator.o: Calculator.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c Calculator.cpp

clean:
	rm -f *.o calculator