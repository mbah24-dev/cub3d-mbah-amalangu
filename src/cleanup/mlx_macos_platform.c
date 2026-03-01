/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_macos_platform.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 02:09:29 by mbah              #+#    #+#             */
/*   Updated: 2026/03/01 10:07:58 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This file contains dummy implementations of the MLX functions that are not
 * needed on macOS, but are required for cross-platform compatibility. */

#include "cub3d.h"

void	mlx_platform_cleanup(void *mlx)
{
	(void)mlx;
}

void	mlx_center_mouse(t_engine *engine)
{
	(void)engine;
}

void	mlx_move_mouse(t_engine *engine, int x, int y)
{
	(void)engine;
	(void)x;
	(void)y;
}
