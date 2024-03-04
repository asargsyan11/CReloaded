/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:51:13 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/13 09:56:36 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char	*t;

	t = str;
	while (*t != '\0')
	{
		ft_putchar(*t);
		t++;
	}
	ft_putchar('\n');
}

void	print_params(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i++ < argc - 1)
	{
		ft_putstr(argv[i]);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0' ))
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		check;
	char	*temp;

	i = 0;
	check = 1;
	while (check)
	{
		check = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				check = 1;
			}
		}
	}
	print_params(argc, argv);
	return (0);
}
