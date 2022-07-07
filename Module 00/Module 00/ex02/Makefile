NAME		= Bank
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		=  test.cpp Account.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= c++

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp Account.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all