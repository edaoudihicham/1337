#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static size_t countwords(const char *s, char c)
{
	size_t i;
	size_t count;
	
	i = 0;
	count = 0;
	while(s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

void	free_dblptr(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

char **split(char *s, char c)
{
    
}
int main()
{
	char	**strs;
	int		i;

	strs = split("      hssh     hsh    e   iin    ", ' ');
	i = 0;
	while (strs[i] != NULL)
	{
		write(1, strs[i], ft_strlen(strs[i]));
		write(1, "$\n", 2);
		i++;
	}
	return 0;
}