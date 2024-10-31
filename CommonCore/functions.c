
#include "header.h"

int ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
int ft_isascii(int c)
{

	return((c >= 0 && c <= 127));
}


int ft_isprint(int c)
{
	return((c >= 32 && c <= 126));
}

size_t ft_strlen(const char *s)
{
	size_t i ;
	i = 0 ;
	while(s[i])
	{
		i++;
	}
	return(i);
}


void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *temp;
	temp = (unsigned char*)b;

	while(len)
	{
        *temp++ = (unsigned char)c;
		len--;
	}
	return(b);
}

void ft_bzero(void *s, size_t n)
{
	unsigned char *temp;
	temp = (unsigned char*)s;

	while(n)
	{
		*temp++ = 0;
		n--;
	}
}

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *s = (unsigned char*)src;
	unsigned char *d = (unsigned char*)dst;

	while (n--)
		*d++ = *s++;
	return(dst);

}








int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
int ft_tolower(int c)
{
	if( c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
