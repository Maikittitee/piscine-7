int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (s1[n] != s2[n])
		return(s1[n] - s2[n]);
	else
		return(0);
}
/*
int	main()
{
	printf("%d", ft_strncmp("Hello","hello",0));
}*/
