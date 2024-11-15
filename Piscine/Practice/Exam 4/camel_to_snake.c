
/**
 * Assignment name  : camel_to_snake
 * Expected files   : camel_to_snake.c
 * Allowed functions: malloc, free, realloc, write
 * --------------------------------------------------------------------------------
 * 
 * Write a program that takes a single string in lowerCamelCase format
 * and converts it into a string in snake_case format.
 * 
 * A lowerCamelCase string is a string where each word begins with a capital letter
 * except for the first one.
 * 
 * A snake_case string is a string where each word is in lower case, separated by
 * an underscore "_".
 * 
 * Examples:
 * $>./camel_to_snake "hereIsACamelCaseWord"
 * here_is_a_camel_case_word
 * $>./camel_to_snake "helloWorld" | cat -e
 * hello_word$
 * $>./camel_to_snake | cat -e
 * $
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if (c >= 'A' && c <= 'Z')
			{
				ft_putchar('_');
				ft_putchar(c + 32);
			}
			else
				ft_putchar(c);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
