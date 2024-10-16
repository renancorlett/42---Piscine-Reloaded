/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:14:04 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/16 11:49:00 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)

{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

/*void	ft_putchar(char c)

{
	write(1, &c, 1);
}

int	main(void)

{
	ft_putstr("Boooora!");
	return (0);
}*/
