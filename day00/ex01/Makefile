SRC = main.cpp show_nb_contact_info.cpp  Contact.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all:
	@$(CC) $(CFLAGS) $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f *~ ./a.out
	@/bin/rm -f *#

re: fclean all
