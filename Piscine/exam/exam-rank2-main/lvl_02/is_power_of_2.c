

// had function katbqa tqsem 3la juj, 2ila bqa qisma f iteration ta wslat l 1 kay3ni beli kharij qisma dima kaykon zero, wnormal ayy 3ada 2ila kan power dyal wahed akhor khes ybqa qder ytqsem 3lih bla mykhli remainder.


#include<stdio.h>

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;

    while (n % 2 == 0)
    {
        n = n / 2;
    }
	if (n == 1)
		return 1;

	return 0; 
}


int	main()
{
	int n = is_power_of_2(8);
	printf("%d\n", n);
	return 0;
}
