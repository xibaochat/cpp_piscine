
SRC = main.cpp  Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp\
		OfficeBlock.cpp  CentralBureaucracy.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)
	@/bin/rm -f *_shrubbery

fclean: clean
	@/bin/rm -f *~ ./a.out
	@/bin/rm -f *#

re: fclean all
