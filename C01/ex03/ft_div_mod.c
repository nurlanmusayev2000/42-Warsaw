/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sila <sila@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:19:35 by sila              #+#    #+#             */
/*   Updated: 2024/08/31 15:51:41 by sila             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main(void)
{
    int a = 10;
    int b = 5;
    int div;
    int mod;
    ft_div_mod(a, b, &div, &mod);
    printf("div = %d, mod = %d", div, mod);
    return(0);
}
*/
