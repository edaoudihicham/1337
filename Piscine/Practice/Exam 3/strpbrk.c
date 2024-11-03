char *_strpbrk(char *s, char *accept)
{
	int k = 0;
	int i = 0;
	while (s[i])
	{
		while (accept[k])
		{
		if (s[i] == accept[k])
		return (s[i]);
		k++;
		}
	i++;
	}
return ('\0');
}
