NAME		= MoarBrainz!
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= ./Zombie.cpp ./zombieHorde.cpp ./newZombie.cpp ./main.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= g++

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all