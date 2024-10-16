/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:11:40 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/16 09:30:06 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)

{
	int	troca;	

	troca = *a;
	*a = *b;
	*b = troca;
}

/*#include <stdio.h>

int	main(void)

{
	int	x;
	int	y;

	x = 5;
	y = 10;
	printf("Antes x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Agora x = %d, y = %d\n", x, y);
	return (0);
}*/
