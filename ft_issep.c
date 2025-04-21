int	ft_issep(char c, char *sep)
{
	while(*sep)
	{
		if (*sep == c)
			return 1;
		sep++;
	}
	return 0;
}
