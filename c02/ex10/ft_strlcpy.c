#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		str++;
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (0);
	while (src[i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int	main(void)
{
	char src[] = "burritos";
	int size;
	char *dest;

	size = 0;
	dest = (char*)malloc(sizeof(char)*size);
	ft_strlcpy(dest, src, size);
	free(dest);
}
