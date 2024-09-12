/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:20:19 by nmusayev          #+#    #+#             */
/*   Updated: 2024/09/02 22:14:27 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				leng_of_dest;

	i = 0;
	leng_of_dest = 0;
	while (dest[leng_of_dest] != '\0')
	{
		leng_of_dest++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[leng_of_dest] = src[i];
		i++;
		leng_of_dest++;
	}
	dest[leng_of_dest] = '\0';
	return (dest);
}
