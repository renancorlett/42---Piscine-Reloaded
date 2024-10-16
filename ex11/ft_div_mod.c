/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:30:56 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/16 09:52:04 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)

{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 13;
	y = 4;
	ft_div_mod(x, y, &div, &mod);
	printf("DIV = %d, MOD = %d\n", div, mod);
	return(0);
}*/
