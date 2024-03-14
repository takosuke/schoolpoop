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

  if (nb == 0) 
  {
    ft_putchar('0');
    ft_putchar('\n');
  }
  else
  {
    while (nb > 0)
    {
      numchar = (nb % 10) + 48;
      numstring[index] = numchar;
      index--;
      nb = nb / 10;
    }
    index++;
    while (index < 11)
    {
      ft_putchar(numstring[index]);
      index++;
    }

    ft_putchar('\n');
  }
}

int	main(void)
{

  int i;
  int t[10];

  t[0] = 0;
  t[1] = 823781;
  t[2] = 1;
  t[3] = 33;
  t[4] = 800008;
  t[5] = 4;
  t[6] = 25;
  t[7] = 80;
  t[8] = 9;
  t[9] = 9;

  while (i < 10) ft_putnbr(t[i++]);
	return (0);
}
