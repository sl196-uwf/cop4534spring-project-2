CXX = g++
CXXFLAGS = -std=c++14 -Wall

OBJS = main.o

main : ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ ${OBJS}

main.o : main.cpp

clean:
	rm ${OBJS} main