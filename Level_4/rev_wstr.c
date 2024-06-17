/* Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/

#include <unistd.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	return ((c == ' ') || (c == '-'));
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int word_start, word_end, len, i;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len >= 0)
		{
			while (ft_isspace(av[1][len]) || !av[1][len])
				--len;
			word_end = len;
			while (!ft_isspace(av[1][len]) && av[1][len])
				--len;
			word_start = (len + 1);
			i = word_start;
			while (word_start <= word_end)
				write(1, &av[1][word_start++], 1);
			if (i != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

