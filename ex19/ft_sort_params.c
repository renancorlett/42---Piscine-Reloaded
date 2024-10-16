/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:04:57 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/16 13:02:14 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_print_params(int argc, char *argv[])

{
	int	x;
	int	y;

	x = 1;
	if (argc > 1)
	{
		while (x < argc)
		{
			y = 0;
			while (argv[x][y])
			{
				ft_putchar(argv[x][y]);
				y++;
			}
			ft_putchar('\n');
			x++;
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*temp;
	int		z;

	z = 1;
	while (z < argc - 1)
	{
		if (ft_strcmp(argv[z], argv[z + 1]) > 0)
		{
			temp = argv[z];
			argv[z] = argv[z + 1];
			argv[z + 1] = temp;
			z = 1;
		}
		else
			z++;
	}
	ft_print_params(argc, argv);
	return (0);
}

/*void	ft_putchar(char c)

{
	write(1, &c, 1);
}*/
