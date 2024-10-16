/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:04:57 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/16 12:16:38 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])

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

/*
void	ft_putchar(char c)

{
	write(1, &c, 1);
}*/
