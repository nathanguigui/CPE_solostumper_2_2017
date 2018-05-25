/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** 
*/

int	my_customputstr(char const *str)
{
	int c;
	c = 0;
	while (str[c] != '\0'){
		if (str[c] != 10)
			my_putchar(str[c]);
		c = c + 1;
	}
	return (0);
}

int	my_putstr(char const *str)
{
	int c;
	c = 0;
	while (str[c] != '\0'){
		my_putchar(str[c]);
		c = c + 1;
	}
	return (0);
}