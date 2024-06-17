#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int		main(int ac, char **av)
{
	int		i;
	int		word_start;

	if (ac > 1)
	{
		i = 0;
		while (ft_is_space(av[1][i]))
			i++;
		word_start = i;
		while (av[1][i] && !ft_is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (av[1][i] && !ft_is_space(av[1][i]) && ft_is_space(av[1][i - 1]))
			{
				while (av[1][i] && !ft_is_space(av[1][i]))
					write(1, &av[1][i++], 1);
				write(1, " ", 1);
			}
			i++;
		}
		while (av[1][word_start] && !ft_is_space(av[1][word_start]))
			write(1, &av[1][word_start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
