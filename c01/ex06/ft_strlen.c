#include <unistd.h>

void ft_strlen(char *str)
{
	int	len;

	while (*str++ != '\0') len++;
}

/*
int main()
{
	char *str = "caca";
	ft_strlen(str);
}
*/
