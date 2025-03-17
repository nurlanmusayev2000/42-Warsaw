/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:19:44 by nmusayev          #+#    #+#             */
/*   Updated: 2025/02/28 12:42:32 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	i_digits(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	put_int(unsigned int n)
{
	static char	digits[] = "0123456789";

	if (n > 9)
	{
		put_int(n / 10);
	}
	write(1, &digits[n % 10], 1);
}

int	ft_print_unsigned(unsigned int n)
{
	put_int(n);
	return (i_digits(n));
}
