CXX = g++

ex1.o: ex1.cpp Complex.hpp
	$(CXX) -c ex1.cpp

Complex.o: Complex.cpp Complex.hpp
	$(CXX) -c Complex.cpp

run: ex1.o Complex.o
	$(CXX) Complex.o ex1.o -o run


clean:
	rm -f run
	rm -f *.o
