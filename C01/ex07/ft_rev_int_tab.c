/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccur <ccur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:00:10 by ccur              #+#    #+#             */
/*   Updated: 2023/02/14 12:38:29 by ccur             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	x = 0;
	while (x < size)
	{
		swap = tab[x];
		tab[x] = tab[size - 1];
		tab[size -1] = swap;
		x++;
		size--;
	}	
}
