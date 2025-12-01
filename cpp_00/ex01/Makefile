NAME = phonebook
C++ = c++
C++FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Phonebook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(C++FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp Phonebook.hpp
	$(C++) $(C++FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
