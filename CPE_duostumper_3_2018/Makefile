##
## EPITECH PROJECT, 2018
## PSU_minishell1_2018
## File description:
## Kylian Lavergne, 21/01/2019, Makefile
##

NAME = crocus
WFLAGE = -W -Wall -Wextra
SRC = *.c
DEBUGFLAG = -g

all: $(NAME)

$(NAME):
	@gcc $(WFLAGE) -o $(NAME) $(SRC)
	@echo "\033[1;30m[SUCCESS]\033[0m: \033[1;32mBuilt succesfully.\033[0m"

clean:
	@rm -f *~
	@rm -f *#
	@echo "\033[1;30m[INFO]: Removed useless files.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;30m[INFO]: Removed older binairy.\033[0m"

re: fclean all

debug: fclean
	@echo "\033[1;30m[WARNING]\033[0m: \033[1;36mThis build is for debug purpose only, it shouldn't be shared.\033[0m"
	@gcc $(DEBUGFLAG) $(WFLAGE) -o $(NAME) $(SRC)
	@echo "\033[1;30m[SUCCESS]\033[0m: \033[1;32mBuilt succesfully for debug.\033[0m"
