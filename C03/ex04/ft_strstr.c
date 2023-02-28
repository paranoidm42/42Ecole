/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccur <ccur@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:46:30 by ccur              #+#    #+#             */
/*   Updated: 2023/02/16 11:46:33 by ccur             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y] && str[x + y] != '\0')
		{
			if (to_find[y + 1] == '\0')
			{
				return (&str[x]);
			}
			y++;
		}
		x++;
	}
	return (0);
}
