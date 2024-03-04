/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:23:44 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/08 14:27:51 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	answer;

	answer = 'N';
	if (n < 0)
		ft_putchar(answer);
	else
	{
		answer = 'P';
		ft_putchar(answer);
	}
}
