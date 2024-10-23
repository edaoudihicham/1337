#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[2][i])
		{
			if (argv[1][j] == argv[2][i])
				j++;

			i++;

			if (argv[1][j] == '\0')
			{
				ft_putstr(argv[1]);
				break ;
			}
		}
	}

	write(1, "\n", 1);
	return (0);
}
