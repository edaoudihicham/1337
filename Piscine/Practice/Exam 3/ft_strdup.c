
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	char *str;
	int len;
	int i;
	
	len = 0;
	i = 0;
	if (src == NULL) //check if src is NULL
		return (NULL);

	while (src[len]) //alculate length
		len++;

	str = (char *)malloc(sizeof(char) * (len + 1)); // allocate memory (len +1) and point to it
	if (str == NULL)
		return (NULL); // check again if str is NULL
	while (src[i])
	{
		str[i] = src[i]; // copy src to str
		i++;
	}
	str[i] = '\0';	//null terminate

	return ((char *)str); //type cast to char*
}

int main()
{
	char src [] = "gg";
	printf("%s", ft_strdup(src));

}
