int ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb > 12)
		return (0);
	while (i)
		nb = i-- * nb;

	return (nb);
}

#include <stdio.h>

int main(void)
{
	int nb;

	nb = ft_iterative_factorial(1);
	printf("%d\n", nb);
	return (0);
}
