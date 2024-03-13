/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcampo <marcampo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:40:39 by marcampo          #+#    #+#             */
/*   Updated: 2024/03/13 20:04:38 by marcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		numchar;
	int		index;
	char	numstring[11];

	index = 10;
	while (nb > 0)
	{
		numchar = (nb % 10) + 48;
		numstring[index] = numchar;
		index--;
		nb = nb / 10;
	}
	while (index < 11)
	{
		ft_putchar(numstring[index]);
		index++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 5321245;
	ft_putnbr(a);
	b = 1;
	ft_putnbr(b);
	c = 100;
	ft_putnbr(c);
	d = 2147483647;
	return (0);
}
