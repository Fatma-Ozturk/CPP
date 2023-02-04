NAME =		IsInside
CC =		c++
FLAGS =		-Wall -Werror -Wextra -std=c++98
SOURCE =	main.cpp \
			Fixed.cpp \
			bsp.cpp \
			Point.cpp \

$(NAME):
			$(CC) $(FLAGS) $(SOURCE) -o  $(NAME)
all:		$(NAME)

clean:
			rm -rf $(NAME)

re:			clean all

.PHONY:		all clean re