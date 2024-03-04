/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:05:32 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/13 12:05:35 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
*/

int	main(int argc, char **argv)
{
	int		count;
	int		i;

	i = 0;
	count = 1;
	while (count != argc)
	{
		while (argv[count][i] != '\0')
		{
			ft_putchar(argv[count][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		count++;
	}
	return (0);
}
