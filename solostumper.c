/*
** EPITECH PROJECT, 2017
** solostumper.c
** File description:
** 
*/

int special_print(char **tab, int words)
{
	int i = 0;

	my_customputstr(tab[words - 1]);
	my_putchar(' ');
	i = i + 1;
	while (i != words) {
		my_customputstr(tab[i - 1]);
		i = i + 1;
		if (i != words)
			my_putchar(' ');
		else
			my_putchar('\n');
	}	
}

int solostumper(char *str)
{
	char **tab = my_str_to_word_array(str);
	int words = coumpt(str);

	if (words == 1) {
		my_putstr(tab[0]);
	}else {
		special_print(tab, words);
	}
	return (0);
}