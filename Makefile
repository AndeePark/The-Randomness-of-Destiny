FLAGS = -Wall -Werror -std=c++11 -g
SRCS := $(wildcard *.cpp)
OBJS := ${SRCS:%.cpp=build/%.o}

main: $(OBJS)
	g++ -o main $^ -o $@
build/%.o: %.cpp
	@mkdir -p build
	g++ $(FLAGS) -c $< -o $@
clean:
	rm -rf build
	rm -f main
