NAME = serializer

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f *~ $(NAME)
	@/bin/rm -f *#

re: fclean all
