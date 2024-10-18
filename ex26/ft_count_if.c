/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:30:22 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/18 15:30:33 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*
#include <stdio.h>
int is_non_empty_string(char *str)
{
    if (str != NULL)
    {
        if (str[0] != '\0')
        {
            return (1);
        }
    }
    return (0);
}

int main(void)
{
    char *tab[] = {"Hello", "World", "", "42", NULL};
    int count = ft_count_if(tab, &is_non_empty_string);
    printf("Number of elements returning 1: %d\n", count);
    return (0);
}
*/
