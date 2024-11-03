
int	ft_atoi(const char *s)
{
	int			i;
	int			sign;
	long		r;

	i = 0;
	r = 0;
	sign = 1;
	
	// Skip whitespaces (ASCII 32 or 9 to 13)
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13)) 
		i++;

	// skip + or multiply by -
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= (-1); 
		i++;
	}
    // Convert string to integer
	while (s[i] >= '0' && s[i] <= '9') 
	{
		r = (r * 10) + (s[i] - '0'); 
		i++;
	}
	// Return the result with the appropriate sign, typecast to int
	return (sign * (int)r);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d",ft_atoi(argv[1]));
	return(0);
}
