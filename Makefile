##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

NAME	=	mysh

SRC		=	$(wildcard ./src/parsing/*.c) \
			$(wildcard ./src/*.c) \
			$(wildcard ./src/shell/*.c) \
			$(wildcard ./src/shell/alias/*.c) \
			$(wildcard ./src/shell/if/*.c) \
			$(wildcard ./src/shell/builtins/*.c) \
			$(wildcard ./src/shell/dup/*.c) \
			$(wildcard ./src/shell/variables/*.c) \
			$(wildcard ./src/shell/inhibitors/*.c) \
			$(wildcard ./src/shell/linked_list/*.c) \
			$(wildcard ./src/shell/globbing/*.c) \
			$(wildcard ./src/shell/mysh/*.c) \
			$(wildcard ./src/shell/which_where/*.c) \
			$(wildcard ./src/shell/foreach/*.c) \
			$(wildcard ./src/shell/scripting/*.c)

CFLAGS	=	-g3 -W -Wall -Wextra

all: $(NAME) clean1

$(NAME): $(SRC)
	make -C ./lib/my	
	gcc $(CFLAGS) -g3 -o $(NAME) $(SRC) -L./lib/my -L./src/ -L. -lmy

clean1 clean2:
	rm -f *.o
	rm -f *~
	rm -f \#*\#
	rm -f vgcore.*

fclean: clean2
	make fclean -C ./lib/my
	rm -f $(NAME)

re: fclean all

.PHONY: all clean1 clean2 fclean re
