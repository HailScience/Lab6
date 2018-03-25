#makefile

#Makefile
CXX = g++


linked: main.o menu.o
	${CXX} main.o menu.o -o linked

main.o: main.cpp
	${CXX} -c main.cpp

menu.o: menu.cpp menu.hpp
	${CXX} -c menu.cpp

clean:
	rm *.o linked
