NAME		= a.out
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= g++

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all