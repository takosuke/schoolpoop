int ft_recursive_factorial(int nb)
{
	int i;
	int result;

	i = nb - 1;
	if (nb > 12)
		return (0);
	
	result = nb * i;
	while (i > 0)
		nb = ft_recursive_factorial(nb - 0);

	return (result);
}

#include <stdio.h>

int main(void)
{
	int nb;

	nb = ft_recursive_factorial(7);
	printf("%d\n", nb);
	return (0);
}
