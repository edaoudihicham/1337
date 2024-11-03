#include <unistd.h>

void	ft_last_word(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i -= 1;
	while (s[i] == ' ' || s[i] == '\t')
		i--;
	while ((s[i] != ' ' && s[i] != '\t') && i >= 0)
		i--;
	i += 1;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
	{
		write(1,&s[i],1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	write(1,"\n",1);
	return (0);
}
