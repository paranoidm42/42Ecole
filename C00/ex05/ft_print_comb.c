/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccur <ccur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:56:39 by ccur              #+#    #+#             */
/*   Updated: 2023/02/02 20:16:07 by ccur             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;		
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x +1;
		while (y <= '8')
		{
			z = y +1;
			while (z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7')
					write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}
