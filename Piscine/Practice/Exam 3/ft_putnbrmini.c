void putnbr(int n)
{
	if (n>=10)
	{
	putnbr(n/10);
	}
	n = (n %10 + '0');
	write(1,&n,1);
}
