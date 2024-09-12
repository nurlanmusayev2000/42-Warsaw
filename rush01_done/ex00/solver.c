/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkowalsk <pkowalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:28:58 by pkowalsk          #+#    #+#             */
/*   Updated: 2024/09/01 23:18:51 by pkowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

int	solve_grid(int grid[SIZE][SIZE], int row, int col, int *views)
{
	int	num;

	num = 1;
	if (row == SIZE - 1 && col == SIZE)
		return (check_views(grid, views));
	if (col == SIZE)
	{
		row++;
		col = 0;
	}
	while (num <= SIZE)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve_grid(grid, row, col + 1, views))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
