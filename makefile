CXX = g++
CXXFLAGS = -std=c++14 -Wall

OBJS = main.o sim.o customer.o

main : ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ ${OBJS}

main.o : main.cpp
sim.o : sim.hpp
customer.o : customer.hpp

clean:
	rm ${OBJS} main