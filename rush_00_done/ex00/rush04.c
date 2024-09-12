/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:15:58 by nmusayev          #+#    #+#             */
/*   Updated: 2024/08/24 23:18:09 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void rush(int col, int row)
{
    int count_col;
    int count_row;

    count_row = 1;
    while (count_row <= row)
    {
		count_col = 1;
        while (count_col <= col)
        {
            if ((count_col == 1 && count_row == 1) || (count_col == col && count_row == row && col != 1 && row != 1))
                ft_putchar(65);
            else if ((count_col == col && count_row == 1) || (count_col == 1 && count_row == row))
                ft_putchar(67);
            else if (count_col == 1 || count_col == col || count_row == 1 || count_row == row)
                ft_putchar(66);
            else
                ft_putchar(32);
            count_col++;
        }
        ft_putchar('\n');
        count_row++;
    }
}