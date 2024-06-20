#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		char *str = av[1];
		int i = 0;
		int word_start = 0;
		int word_end = 0;

		while (ft_is_space(str[i]))
			++i;
		word_start = i;
		while (!ft_is_space(str[i]) && str[i])
			++i;
		word_end = i;
		while (ft_is_space(str[i]))
			++i;
		while (str[i])
		{
			if (!ft_is_space(str[i]) && ft_is_space(str[i - 1]) && str[i])
			{
				while (!ft_is_space(str[i]) && str[i])
					write (1, &str[i++], 1);
				write (1, " ", 1);
			}
			i++;
		}
		while (word_start < word_end)
			write (1, &str[word_start++], 1);
	}
	write (1, "\n", 1);
	return (0);
