/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:54:53 by nmusayev          #+#    #+#             */
/*   Updated: 2024/09/02 15:44:48 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	total;
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		total = s1[i] - s2[i];
		if (total != 0)
		{
			return (total);
		}
		i++;
	}
	total = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (total);
}
