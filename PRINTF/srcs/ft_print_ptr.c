/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:52:55 by nmusayev          #+#    #+#             */
/*   Updated: 2025/02/28 16:05:21 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	p_digits(unsigned long n)
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

static void	put_ptr(unsigned long n)
{
	static char	arr[] = "0123456789abcdef";

	if (n >= 16)
	{
		put_ptr(n / 16);
	}
	write(1, &arr[n % 16], 1);
}

int	ft_print_ptr(void *addr)
{
	unsigned long	ptr;

	if (addr == NULL)
	{
		return (write(1, "(nil)", 5));
	}
	ptr = (unsigned long)addr;
	write(1, "0x", 2);
	put_ptr(ptr);
	return (p_digits(ptr) + 2);
}
