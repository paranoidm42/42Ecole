/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccur <ccur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:25:39 by ccur              #+#    #+#             */
/*   Updated: 2023/02/21 12:33:30 by ccur             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	ans;
	int				i;

	i = nb;
	ans = 1;
	while (i > 0)
	{
		ans = i * ans;
		i--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (ans);
}
