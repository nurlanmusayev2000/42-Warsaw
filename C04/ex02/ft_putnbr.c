/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:26:20 by nmusayev          #+#    #+#             */
/*   Updated: 2024/09/03 15:15:43 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digit(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
		return ;
	}
	if (nb < 10)
	{
		ft_print_digit(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_print_digit(nb % 10);
	}
}
