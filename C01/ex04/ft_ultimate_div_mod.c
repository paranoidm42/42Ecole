/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccur <ccur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:38:51 by ccur              #+#    #+#             */
/*   Updated: 2023/02/14 12:26:40 by ccur             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bck;
	int	lnb;

	bck = *a / *b;
	lnb = *a % *b;
	*a = bck;
	*b = lnb;
}
