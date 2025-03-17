/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:53:21 by nmusayev          #+#    #+#             */
/*   Updated: 2025/02/28 12:47:51 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	exec_conversion(char spec_ltr, va_list args)
{
	if (spec_ltr == '%')
		return (write(1, "%", 1));
	else if (spec_ltr == 'c')
		return (ft_print_char((char)va_arg(args, int)));
	else if (spec_ltr == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (spec_ltr == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (spec_ltr == 'd' || spec_ltr == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (spec_ltr == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (spec_ltr == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), false));
	else if (spec_ltr == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), true));
	return (0);
}

int	ft_printf(const char *__format, ...)
{
	int		len;
	va_list	args;

	if (!__format)
	{
		return (0);
	}
	len = 0;
	va_start(args, __format);
	while (*__format)
	{
		if (*__format == '%')
		{
			__format++;
			len += exec_conversion(*__format, args);
		}
		else
			len += write(1, &(*__format), 1);
		__format++;
	}
	va_end(args);
	return (len);
}
