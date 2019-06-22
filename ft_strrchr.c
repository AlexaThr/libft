
int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}



char *ft_strrchr(char *str, int ch)
{
	int i;
	i = ft_strlen(str);
	while (str[i] != ch && i >= 0)
	{
		i--;
	}	
	
	if (str[i] == (char)ch)
	{
		return (&str[i]);
	}
	
	return (0);
}
