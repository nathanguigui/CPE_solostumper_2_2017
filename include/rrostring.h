/*
** EPITECH PROJECT, 2017
** stumper.h
** File description:
** 
*/

#ifndef RROSTRING
#define RROSTRING
#include <stdlib.h>
#include <unistd.h>

int my_putchar(char c);
int my_strlen(char *str);
int	my_putstr(char const *str);
int	my_customputstr(char const *str);
int my_put_nbr(int nb);
int     is_charac(char c);
int	coumpt(char *str);
int len_of_word(char *str, int i);
char **my_str_to_word_array(char *str);
int solostumper(char *str);


#endif