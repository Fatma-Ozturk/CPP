NAME =		war
CC =		clang++
FLAGS =		-Wall -Werror -Wextra -std=c++98
SOURCE =	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \

$(NAME):
			$(CC) $(FLAGS) $(SOURCE) -o  $(NAME)
all:		$(NAME)

clean:
			rm -rf $(NAME)

re:			clean all

.PHONY:		all clean re