/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:07:34 by nmusayev          #+#    #+#             */
/*   Updated: 2024/09/08 14:04:16 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		len;
	int		i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	duplicate = (char *)malloc((len +1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
