NAME =		Bureaucrat
CC =		c++
FLAGS =		-Wall -Wextra -Werror -std=c++98
SOURCE =	main.cpp \
			Bureaucrat.cpp \

$(NAME):
			$(CC) $(FLAGS) $(SOURCE) -o  $(NAME)
all:		$(NAME)

clean:
			rm -rf $(NAME)

re:			clean all

.PHONY:		all clean re