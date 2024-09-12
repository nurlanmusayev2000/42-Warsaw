/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkowalsk <pkowalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 23:00:34 by pkowalsk          #+#    #+#             */
/*   Updated: 2024/09/01 23:13:34 by pkowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

int	check_column_from_top(int grid[SIZE][SIZE], int col, int expected_view)
{
	int	max;
	int	count;
	int	row;

	max = 0;
	count = 0;
	row = 0;
	while (row < SIZE)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			count++;
		}
		row++;
	}
	return (count == expected_view);
}

int	check_column_from_bottom(int grid[SIZE][SIZE], int col, int expected_view)
{
	int	max;
	int	count;
	int	row;

	max = 0;
	count = 0;
	row = SIZE - 1;
	while (row >= 0)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			count++;
		}
		row--;
	}
	return (count == expected_view);
}

int	check_row_from_left(int grid[SIZE][SIZE], int row, int expected_view)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = 0;
	while (col < SIZE)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			count++;
		}
		col++;
	}
	return (count == expected_view);
}

int	check_row_from_right(int grid[SIZE][SIZE], int row, int expected_view)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = SIZE - 1;
	while (col >= 0)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			count++;
		}
		col--;
	}
	return (count == expected_view);
}
