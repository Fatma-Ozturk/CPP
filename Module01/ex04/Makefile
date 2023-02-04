NAME =		replace
CC =		clang++
FLAGS =		-Wall -Werror -Wextra -std=c++98
SOURCE =	main.cpp

$(NAME):
			$(CC) $(FLAGS) $(SOURCE) -o  $(NAME)
all:		$(NAME)

clean:
			rm -rf $(NAME)

re:			clean all

.PHONY:		all clean re