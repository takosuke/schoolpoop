/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcampo <marcampo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:59:55 by marcampo          #+#    #+#             */
/*   Updated: 2024/03/13 19:11:34 by marcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	format_print(int a[], int is_end)
{
	ft_putchar(a[0]);
	ft_putchar(a[1]);
	ft_putchar(a[2]);
	if (is_end == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('\n');
	}
}

void	print_comb(void)
{
	int	i[3];
	int	is_end;

	i[0] = '0';
	i[1] = '1';
	i[2] = '2';
	is_end = 0;
	while (i[0] <= '7')
	{
		while (i[1] <= '9')
		{
			while (i[2] <= '9')
			{
				if (i[0] == '7' && i[1] == '8' && i[2] == '9')
				{
					is_end = 1;
				}
				format_print(i, is_end);
				i[2]++;
			}
			i[2] = ++i[1] + 1;
		}
		i[1] = ++i[0];
	}
}

int	main(void)
{
	print_comb();
	return (0);
}
