/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:33:30 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/13 12:41:22 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	result;

	if (nb < 0)
		return (0);
	i = 0;
	result = 1;
	while (i < nb)
	{
		result *= i + 1;
		if (result >= 2147483647)
			return (0);
		i++;
	}
	return (result);
}
