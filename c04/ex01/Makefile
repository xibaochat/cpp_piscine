SRC = main.cpp  AWeapon.cpp Character.cpp Enemy.cpp \
	PlasmaRifle.cpp PowerFist.cpp \
	RadScorpion.cpp SuperMutant.cpp

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
