/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccur <ccur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:19:02 by ccur              #+#    #+#             */
/*   Updated: 2023/02/21 17:28:29 by ccur             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		nb = 0;
	if (power == 0)
		nb = 1;
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
