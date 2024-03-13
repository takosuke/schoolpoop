/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcampo <marcampo@student.42berlin.d	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/03/13 19:17:03 by marcampo	       #+#    #+#	      */
/*   Updated: 2024/03/13 19:37:08 by marcampo         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	format_print(int a[], int b[], int is_end)
{
	ft_putchar(a[0]);
	ft_putchar(a[1]);
	ft_putchar(' ');
	ft_putchar(b[0]);
	ft_putchar(b[1]);
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

void	increment_and_print(int a[], int b[], int is_end)
{
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			while (b[0] <= '9')
			{
				while (b[1] <= '9')
				{
					if (a[0] == '9' && a[1] == '9' \
							&& b[0] == '9' && b[1] == '9')
					{
						is_end = 1;
					}
					format_print(a, b, is_end);
					b[1]++;
				}
				b[0]++;
				b[1] = '0';
			}
			a[1]++;
			b[0] = '0';
		}
		a[0]++;
		a[1] = '0';
	}
}

void	print_comb2(void)
{
	int	a[2];
	int	b[2];
	int	is_end;

	a[0] = '0';
	a[1] = '0';
	b[0] = '0';
	b[1] = '0';
	is_end = 0;
	increment_and_print(a, b, is_end);
}

int	main(void)
{
	print_comb2();
	return (0);
}
