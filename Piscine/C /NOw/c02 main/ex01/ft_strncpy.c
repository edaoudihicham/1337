#include<string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()

{
	unsigned int n = 3	;
	char src[] = "Hel";
	char dest[55];

	printf("%s\n",ft_strncpy(dest, src, n) );

	printf("%s",strncpy(dest,src,n));
}
