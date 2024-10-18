/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:28:00 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/18 15:28:07 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
#include <stdio.h>
void subtract_one(int n) {
    printf("%d\n", n - 1);
}

int main(void) {
    int tab[] = {5, 10, 15, 20, 25}; 
    int length = sizeof(tab) / sizeof(tab[0]); 
    ft_foreach(tab, length, &subtract_one);
    return (0);
}
*/
