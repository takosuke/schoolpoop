/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcampo <marcampo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:42:50 by marcampo          #+#    #+#             */
/*   Updated: 2024/03/12 16:52:21 by marcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		i;

	i = 122;
	while (i > 96)
	{
		c = (char)i;
		write(1, &c, 1);
		i--;
	}
}
