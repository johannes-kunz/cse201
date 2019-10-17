CXX = g++

ex1.o: ex1.cpp Complex.hpp
	$(CXX) -c ex1.cpp

Complex.o: Complex.cpp Complex.hpp
	$(CXX) -c Complex.cpp

run: ex1.o Complex.o
	$(CXX) Complex.o ex1.o -o run



LinkedList.o: LinkedList.hpp LinkedList.cpp
	$(CXX) -c LinkedList.cpp

ex6.o: ex6.cpp LinkedList.hpp
	$(CXX) -c ex6.cpp

ex6: ex6.o LinkedList.o
	$(CXX) LinkedList.o ex6.o -o ex6

clean:
	rm -f run
	rm -f *.o
	rm -f veh

veh: ex6.o Vehicle.cpp
	$(CXX) Vehicle.cpp -o veh
