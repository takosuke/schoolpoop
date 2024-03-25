int ft_iterative_power(int nb, int power)
{
	int result;

	if (power <= 0)
	{
		return (0);
	}
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power --;
	}
	return (result);
}

#include <stdio.h>

int main(void)
{
	printf("%d ^ %d = %d\n", 2, 2, ft_iterative_power(2, 2));
	printf("%d ^ %d = %d\n", 2, 3, ft_iterative_power(2, 3));
	printf("%d ^ %d = %d\n", 3, 3, ft_iterative_power(3, 3));
	printf("%d ^ %d = %d\n", 2, 8, ft_iterative_power(2, 8));
	printf("%d ^ %d = %d\n", 5, 4, ft_iterative_power(5, 4));

	return (0);
}
