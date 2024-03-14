#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
	int	n;

	n = 42;
	nbr = &n;

}

int main(void)
{
	int *nbr;

	ft_ft(nbr);
	return (0);

}
