
#include <unistd.h>

void ft_putnbr(int nb)
{
	char	arr[10];
	int		i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}

	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb / 10)
	{
		arr[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	if (nb < 10)
		arr[i] = nb + 48;
	while (i >= 0)
		write(1, &arr[i--], 1);

	/*
	write(1, "\n", 1);
	if (nb >=10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
	}
	*/
}

int main()
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(1230);
	write(1, "\n", 1);
	ft_putnbr(10000);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	return (0);
	return (0);
}
