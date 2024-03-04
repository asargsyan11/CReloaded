/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:00:54 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/09 10:09:50 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	answer;

	answer = 1;
	if (nb <= 0)
		return (0);
	while (answer <= 46340)
	{
		if (answer * answer == nb)
			return (answer);
		answer++;
	}
	return (0);
}
