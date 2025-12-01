C++     = c++
C++FLAGS = -Wall -Wextra -Werror -std=c++98

SRC      = Account.cpp tests.cpp
OBJ      = $(SRC:.cpp=.o)
NAME     = account

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(C++FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(C++FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
