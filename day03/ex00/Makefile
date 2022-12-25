SRC = main.cpp FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f *~ ./a.out
	@/bin/rm -f *#

re: fclean all
