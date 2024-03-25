#include <stdio.h>
int ft_sqrt(int nb)
{
	int start;

	start = nb;
	if (nb <= 0)
		return (0);

	if (nb * nb == start)
		return nb;

	


}

int main(void)
{
	printf("sqrt of %d is %d\n", 9, ft_sqrt(9));
	printf("sqrt of %d is %d\n", 16, ft_sqrt(16));
	printf("sqrt of %d is %d\n", 25, ft_sqrt(25));
	return (0);
}
		
