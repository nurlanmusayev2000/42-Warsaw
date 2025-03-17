/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 22:07:00 by nmusayev          #+#    #+#             */
/*   Updated: 2025/01/09 17:25:58 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmedstr;
	size_t	bgn;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	bgn = 0;
	end = ft_strlen(s1);
	while (s1[bgn] && ft_strchr(set, s1[bgn]))
		bgn++;
	while (end > bgn && ft_strchr(set, s1[end - 1]))
		end--;
	trimmedstr = (char *)malloc((end - bgn + 1) * sizeof(char));
	if (!trimmedstr)
		return (NULL);
	i = 0;
	while (bgn < end)
		trimmedstr[i++] = s1[bgn++];
	trimmedstr[i] = '\0';
	return (trimmedstr);
}
