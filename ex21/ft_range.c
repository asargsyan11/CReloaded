/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:44:44 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/09 10:55:02 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	res = (int *)malloc(sizeof(int) * size);
	if (res == 0)
	{
		return (NULL);
	}
	if (min >= max)
	{
		return (res = NULL);
	}
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
