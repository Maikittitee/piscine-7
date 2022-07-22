unsigned int ft_strlcpy(char *dest, char *src,unsigned int size)
{
	int src_size;

	src_size = 0;
	while (src[src_size] != '\0')
	{
		src_size++;
	}
	return(src_size);
}
/*
int main(void)
{
	char src[20] = "Hello";
	char dest[10];
	printf("%d", ft_strlcpy(dest, src, 10));
}*/
