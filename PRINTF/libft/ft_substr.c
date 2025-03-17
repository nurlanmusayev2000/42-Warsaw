/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:44:08 by nmusayev          #+#    #+#             */
/*   Updated: 2025/01/13 21:52:07 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	substr_len;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	substr_len = slen - start;
	if (substr_len > len)
		substr_len = len;
	new = (char *)malloc(sizeof(char) * (substr_len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, substr_len + 1);
	return (new);
}
