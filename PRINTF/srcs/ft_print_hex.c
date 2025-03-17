/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:23:44 by nmusayev          #+#    #+#             */
/*   Updated: 2025/02/27 14:36:56 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	h_digits(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		i++;
		n /= 16;
	}
	return (i);
}

static void	put_hex(unsigned int n, bool upper_case)
{
	static char	upper_digits[] = "0123456789ABCDEF";
	static char	lower_digits[] = "0123456789abcdef";

	if (n >= 16)
	{
		put_hex((n / 16), upper_case);
	}
	if (upper_case == true)
	{
		write(1, &upper_digits[n % 16], 1);
	}
	else
	{
		write(1, &lower_digits[n % 16], 1);
	}
}

int	ft_print_hex(unsigned int n, bool upper_case)
{
	put_hex(n, upper_case);
	return (h_digits(n));
}
