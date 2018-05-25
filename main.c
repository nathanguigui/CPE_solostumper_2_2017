/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** 
*/

int main(int ac, char **av)
{
	char **tab;

	if (ac != 2) {
		my_putchar('\n');
		return (84);
	}
	else {
		solostumper(av[1]);
	}
	return (0);
}