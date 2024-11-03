#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int rot_13(char c) //int to char
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	{
		c += 13;
	}
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	{
		c -= 13;
	}

	return (c); //don't forget
}


int main(int argc, char **argv)
{
	int i;
	i=0;
	
	if (argc==2)
	{
		while(argv[1][i])
		{
		ft_putchar(rot_13(argv[1][i])); // rot inside putchar
		i++;
		}
	}
	write(1,"\n",1);
}
