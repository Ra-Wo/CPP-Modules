NAME		= a.out
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= ./main.cpp ./Animal/Animal.cpp ./Cat/Cat.cpp ./Dog/Dog.cpp ./Brain/Brain.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= g++

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp ./main.hpp ./Animal/Animal.hpp ./Cat/Cat.hpp ./Dog/Dog.hpp ./Brain/Brain.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all