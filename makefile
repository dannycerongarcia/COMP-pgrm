run: main.o maxSubArrSum.o
	g++ -std=c++17 -O2 -Wall main.o maxSubArrSum.o -o run
maxSubArrSum.o: maxSubArrSum.cpp maxSubArrSum.h
	g++ -c maxSubArrSum.cpp maxSubArrSum.h
main.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o run