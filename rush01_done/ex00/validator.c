/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkowalsk <pkowalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:29:36 by pkowalsk          #+#    #+#             */
/*   Updated: 2024/09/01 23:05:15 by pkowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

int	is_valid(int grid[SIZE][SIZE], int row, int col, int num)
{
	int	x;

	x = 0;
	while (x < SIZE)
	{
		if (grid[row][x] == num || grid[x][col] == num)
			return (0);
		x++;
	}
	return (1);
}

int	check_column_views(int grid[SIZE][SIZE], int *views)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (!check_column_from_top(grid, i, views[i]))
			return (0);
		if (!check_column_from_bottom(grid, i, views[SIZE + i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_row_views(int grid[SIZE][SIZE], int *views)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (!check_row_from_left(grid, i, views[2 * SIZE + i]))
			return (0);
		if (!check_row_from_right(grid, i, views[3 * SIZE + i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_views(int grid[SIZE][SIZE], int *views)
{
	if (!check_column_views(grid, views))
		return (0);
	if (!check_row_views(grid, views))
		return (0);
	return (1);
}
