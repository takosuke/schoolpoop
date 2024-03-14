#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str != '\0') write(1, str++, 1);
}

/*
int main()
{
	char *str;
	
	str = "PooooooP! I am the god of hellpoop and I bring you POOOOOP!";
	ft_putstr(str);
	return (0);
}
*/
