/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:26:33 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/16 11:24:31 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)

{
	int	i;

	i = 1;
	if (nb < 2147483647)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			else
				i++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)

{
	printf("%d\n", ft_sqrt(16));
	return (0);
}*/
