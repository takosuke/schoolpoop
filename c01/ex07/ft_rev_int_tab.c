#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	tmp[size];
	int	i;

	int poop;
	int *start = tab;


	i = size - 1;
	while (i >= 0)
	{
		tmp[i] = *tab;
		i--;
		tab++;
	}

	poop = 0;
	while (poop < size)
	{
		printf("%d", tmp[poop]);
		poop++;
	}

	printf("\n now comes the original one\n");
	poop = 0;
	while (poop < size)
	{
		printf("%d", *start);
		start++;
		poop++;
	}
	i = 0;
	while (i < size)
	{
		i++;
	}

}

int main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size;

	size = 5;

	ft_rev_int_tab(tab, size);

	while (size > 0)
	{
	printf("%d", tab[size]);
	size--;
	}

	return (0);
}

	
