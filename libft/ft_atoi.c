/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:51:19 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/07 23:38:17 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	test(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+')
	{
	}
}

long	ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && 13 >= str[i]) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		sign = -1;
		i++;
	}
	while (str[i])
		res = (res * 10) + str[i++] - 48;
	return (res * sign);
}
