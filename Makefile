##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	*.c

all:
	@gcc -include ./include/rrostring.h *.c -o rrostring
	@echo "all complete"
fclean:
	@rm rrostring
	@echo "fclean done"

re:	fclean all
	@echo "re done"