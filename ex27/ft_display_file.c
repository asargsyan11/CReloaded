/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:25:04 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/13 12:35:09 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		filedesc;
	char	bf[1];

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		bf[0] = 0;
		filedesc = open(argv[1], O_RDONLY);
		if (filedesc == -1)
		{
			ft_putstr("Cannot read file.\n");
			return (1);
		}
		while (read(filedesc, bf, 1))
			ft_putchar(bf[0]);
		close(filedesc);
		return (0);
	}
}
