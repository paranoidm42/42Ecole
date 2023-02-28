/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccur <ccur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:32:33 by ccur              #+#    #+#             */
/*   Updated: 2023/02/24 16:24:10 by ccur             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dup;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dup = (int *) malloc(sizeof(int) * (max - min));
	if (dup == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		dup[i] = min;
		min++;
		i++;
	}
	*range = dup;
	return (i);
}
