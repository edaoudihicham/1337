


#include <unistd.h>

void	last_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == 32 && str[i + 1] > 32 && str[i + 1] < 127)
		{
			j = i + 1;
		}
		i++;
	}

	while (str[j] > 32 && str[j] < 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
