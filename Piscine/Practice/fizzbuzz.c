#include<unistd.h>

void putnbr(int n)
{
	if (n>=10)
	{
	putnbr(n/10);
	}
	n = (n %10 + '0');
	write(1,&n,1);
}

int main (void)
{
	int nbr =1;
	while(nbr <=100)
	{
		if ((nbr % 3 ==0) && (nbr % 5 ==0))
			{
				write(1,"fizzbuzz",8);
			}

		else if (nbr % 3 ==0 )
			{
			write(1,"fizz",4);
			}
		else if (nbr %5 ==0)
			{
			write(1,"buzz",4);
			}
		else 
	    	putnbr(nbr);
		
	write(1,"\n",1);
	nbr++;

	}
	return 0;
}
