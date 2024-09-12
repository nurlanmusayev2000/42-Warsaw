/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:58:28 by nmusayev          #+#    #+#             */
/*   Updated: 2024/09/02 17:16:54 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	total;

	i = 0;
	while (n != 0)
	{
		total = s1[i] - s2[i];
		if (total != 0)
		{
			return (total);
		}
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			break ;
		}
		n--;
		i++;
	}
	return (0);
}
