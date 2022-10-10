SHELL = /bin/sh
n=temp
l=cpp

all:

ifeq ($(l), cpp)
	g++ -Wall -Wextra -Wshadow -Wconversion -Wfloat-equal -Wduplicated-cond -Wlogical-op -fsanitize=undefined,address -D_GLIBCXX_DEBUG $(n).cpp -o $(n)
	time ./$(n) < $(n).in
else ifeq ($(l), p)
	time python3 $(n).py < $(n).in
else ifeq ($(l), j)
	javac $(n).java
	time java $(n) < $(n).in

endif
