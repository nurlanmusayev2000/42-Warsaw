/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:18:30 by nmusayev          #+#    #+#             */
/*   Updated: 2025/02/27 15:29:29 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>

int		ft_printf(const char *__format, ...);
int		ft_print_char(char const c);
int		ft_print_hex(unsigned int nbr, bool upper_case);
int		ft_print_str(char const *str);
int		ft_print_nbr(int n);
int		ft_print_ptr(void *ptr_addr);
int		ft_print_unsigned(unsigned int nbr);

#endif