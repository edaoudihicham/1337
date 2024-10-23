#include <stdlib.h>

size_t			ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break ;
			j++;
		}
		if (accept[j] == '\0')
			break ;
		i++;
	}
	return (i);
}
int main()
{
    int n;
    n = ft_strspn("hello world", "hello");
    printf("ft_:\t%d\n", n);
    n = strspn("hello world", "hello");
    printf("STD:\t%d\n", n);

    n = ft_strspn("hello world", "xx");
    printf("ft_:\t%d\n", n);
    n = strspn("hello world", "xx");
    printf("STD:\t%d\n", n);

    n = ft_strspn("hello world", "world");
    printf("ft_:\t%d\n", n);
    n = strspn("hello world", "world");
    printf("STD:\t%d\n", n);
    return 0;
}
