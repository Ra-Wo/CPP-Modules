NAME		= a.out
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= ./main.cpp ./Span.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= g++

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp Span.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all