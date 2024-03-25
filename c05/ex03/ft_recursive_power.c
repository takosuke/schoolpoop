#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
	int result;

	if (power <= 0)
	{
		return (0);
	}
	result = 1;
	if (power == 1)
		return nb;
	printf("first round power of %d\n", power);
	return (nb * ft_recursive_power(nb, (power - 1)));
}


int main(void)
{
	printf("%d ^ %d = %d\n", 2, 2, ft_recursive_power(2, 2));
	printf("%d ^ %d = %d\n", 2, 3, ft_recursive_power(2, 3));
	printf("%d ^ %d = %d\n", 3, 3, ft_recursive_power(3, 3));
	printf("%d ^ %d = %d\n", 2, 8, ft_recursive_power(2, 8));
	printf("%d ^ %d = %d\n", 5, 4, ft_recursive_power(5, 4));

	return (0);
}
