/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmusayev <nmusayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 22:52:30 by nmusayev          #+#    #+#             */
/*   Updated: 2024/09/04 23:09:57 by nmusayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(int index)
{
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index < 0)
	{
		return (-1);
	}
	return (2);
}

int	ft_fibonacci(int index)
{
	int	i;
	int	j;
	int	z;
	int	sc_el;
	int	res;

	j = 1;
	i = 0;
	z = 0;
	sc_el = index - 1;
	res = checker(index);
	if (res < 2)
	{
		return (res);
	}
	while (sc_el != 0)
	{
		z = i + j;
		i = j;
		j = z;
		sc_el --;
	}
	return (z);
}
