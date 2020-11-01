run: main.o maxSubArrSum.o comparisonOperators.o
	g++ -std=c++17 -O2 -Wall main.o maxSubArrSum.o comparisonOperators.o -o run
maxSubArrSum.o: maxSubArrSum.cpp maxSubArrSum.h
	g++ -c maxSubArrSum.cpp maxSubArrSum.h
comparisonOperators.o: comparisonOperators.cpp comparisonOperators.h
	g++ -c comparisonOperators.cpp comparisonOperators.h
main.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o run