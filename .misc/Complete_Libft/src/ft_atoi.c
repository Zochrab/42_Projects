/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zblume <zblume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:01:10 by zblume            #+#    #+#             */
/*   Updated: 2024/12/12 15:04:16 by zblume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * This function converts a string of digits into an integer value.
 * 
 * @param nptr A pointer to the string of digits to be converted.
 * 
 * @return The integer value represented by the string of digits.
 */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
			|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			n = n * 10 + (nptr[i] - '0');
		else
			return (n * sign);
		i++;
	}
	return (n * sign);
}