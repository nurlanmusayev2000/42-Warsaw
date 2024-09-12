/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:34:17 by nmusayev          #+#    #+#             */
/*   Updated: 2024/09/02 22:14:25 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	leng_of_dest;
	int	i;

	i = 0;
	leng_of_dest = 0;
	while (dest[leng_of_dest] != '\0')
	{
		leng_of_dest++;
	}
	while (src[i] != '\0')
	{
		dest[leng_of_dest] = src[i];
		i++;
		leng_of_dest++;
	}
	dest[leng_of_dest] = '\0';
	return (dest);
}
