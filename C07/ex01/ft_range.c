/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccur <ccur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:20:34 by ccur              #+#    #+#             */
/*   Updated: 2023/02/24 12:22:23 by ccur             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dup;

	i = 0;
	if (min >= max)
		return (0);
	dup = (int *) malloc(sizeof(int) * (max - min));
	if (dup == NULL)
		return (0);
	while (i < (max - min))
	{
		dup[i] = min + i;
		i++;
	}
	return (dup);
}
