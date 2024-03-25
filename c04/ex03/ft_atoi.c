#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;	
	}
	return (len);
}

int ft_atoi(char *str)
{
	int nb;
	int end;
	int start;

	nb = 0;
	start = 0;
	end = ft_strlen(str);
	while (start < end)
	{
	}
	return (nb);
}
int main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
	return (0);
}

