/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:17:53 by nmusayev          #+#    #+#             */
/*   Updated: 2025/02/27 12:46:24 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char const *str)
{
	if (!str)
	{
		return (write(1, "(null)", 6));
	}
	else
	{
		return (write(1, str, ft_strlen(str)));
	}
}
