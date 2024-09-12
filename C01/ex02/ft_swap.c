/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sila <sila@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:20:13 by sila              #+#    #+#             */
/*   Updated: 2024/08/28 19:10:04 by sila             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	nbr;

	nbr = *a;
	*a = *b;
	*b = nbr;
}

/*
void ft_swap(int *a, int *b);

int main() {
    int x = 5;
    int y = 10;

    printf("x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);  
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
*/