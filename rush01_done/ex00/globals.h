/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globals.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkowalsk <pkowalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:00:35 by pkowalsk          #+#    #+#             */
/*   Updated: 2024/09/01 23:17:17 by pkowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBALS_H
# define GLOBALS_H

# include <unistd.h>
# define SIZE 4

void	init_grid(int grid[SIZE][SIZE]);
void	print_grid(int grid[SIZE][SIZE]);
int		solve_grid(int grid[SIZE][SIZE], int row, int col, int *views);
int		is_valid(int grid[SIZE][SIZE], int row, int col, int num);
int		check_column_views(int grid[SIZE][SIZE], int *views);
int		check_row_views(int grid[SIZE][SIZE], int *views);
int		check_views(int grid[SIZE][SIZE], int *views);
int		check_column_from_top(int grid[SIZE][SIZE], int col, int exp_view);
int		check_column_from_bottom(int grid[SIZE][SIZE], int col, int exp_view);
int		check_row_from_left(int grid[SIZE][SIZE], int row, int exp_view);
int		check_row_from_right(int grid[SIZE][SIZE], int row, int exp_view);

#endif