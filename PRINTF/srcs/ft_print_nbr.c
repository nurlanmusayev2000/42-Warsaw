/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:36:14 by nmusayev          #+#    #+#             */
/*   Updated: 2025/02/28 12:35:56 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	i_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
	{
		digits = 1;
	}
	while (n != 0)
	{
		n /= 10;
		digits ++;
	}
	return (digits);
}

static	void	put_int(int n)
{
	static char	digits[] = "0123456789";

	if (n > 9)
	{
		put_int(n / 10);
	}
	write(1, &digits[n % 10], 1);
}

int	ft_print_nbr(int n)
{
	int	len;

	if (n == INT_MIN)
	{
		return (write(1, "-2147483648", 11));
	}
	len = i_digits(n);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	put_int(n);
	return (len);
}
