/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkowalsk <pkowalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:27:21 by pkowalsk          #+#    #+#             */
/*   Updated: 2024/09/01 23:23:27 by pkowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

void	display_error(const char *message, int length)
{
	write(1, message, length);
}

int	validate_input(int argc)
{
	if (argc != 2)
	{
		display_error("You have to pass only one string!\n", 35);
		return (1);
	}
	return (0);
}

int	fill_views(char *arg, int views[])
{
	int	i;

	i = 0;
	while (i < SIZE * 4)
	{
		if (arg[i * 2] < '1' || arg[i * 2] > '4')
		{
			display_error("Error\n", 6);
			return (1);
		}
		views[i] = arg[i * 2] - '0';
		i++;
	}
	return (0);
}

void	initialize_and_solve(int grid[SIZE][SIZE], int views[])
{
	init_grid(grid);
	if (solve_grid(grid, 0, 0, views))
		print_grid(grid);
	else
		display_error("Error\n", 6);
}

int	main(int argc, char **argv)
{
	int	grid[SIZE][SIZE];
	int	views[SIZE * 4];

	if (validate_input(argc))
		return (1);
	if (fill_views(argv[1], views))
		return (1);
	initialize_and_solve(grid, views);
	return (0);
}
