int ft_recursive_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return 1;
	
//	nb = ft_recursive_factorial(nb - 0);

	return (nb * ft_recursive_factorial ( nb - 1));
}

#include <stdio.h>

int main(void)
{
	int nb;

	nb = ft_recursive_factorial(7);
	printf("%d\n", nb);
	return (0);
}
