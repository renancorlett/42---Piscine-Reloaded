/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:22:32 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/15 14:37:28 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c, 1);
}

int main    (void)
{    
    ft_is_negative(-5);
    ft_is_negative(10);
    ft_is_negative(0);
    return(0);
}*/
