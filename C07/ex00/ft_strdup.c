#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_size;
	int		i;
	char	*dest;
	char	*mol;

	i = 0;
	src_size = ft_strlen(src);
	mol = (dest = ((char *)malloc(src_size * sizeof(char) + 1)));
	if (!mol)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "test malloc";
	printf("original  : base  : %s @ %p\n", str, str);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : %s @ %p\n", allocated, allocated);
}
