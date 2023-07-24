/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:16:39 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/24 09:35:49 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	quit(void)
{
	exit(0);
}

void	create_win(t_game *img)
{
	int	i;

	i = 0;
	while (img->map_mtx[i])
		i++;
	img->mlx = mlx_init();
	img->window = mlx_new_window(img->mlx, \
	(64 * ft_strlen(img->map_mtx[0])), (64 * (i) + 64), "so_long");
	mlx_hook(img->window, 17, 0, quit, 0);
}

void	put_image(t_game *img)
{
	int	i;
	int	j;

	i = -1;
	assign_img(img);
	while (img->map_mtx[++i])
	{
		j = 0;
		while (img->map_mtx[i][j] != '\0')
		{
			if (img->map_mtx[i][j] == '1')
				mlx_put_image_to_window(img->mlx, \
				img->window, img->wall, j * 64, i * 64);
			else if (img->map_mtx[i][j] == '0')
				mlx_put_image_to_window(img->mlx, \
				img->window, img->empty, j * 64, i * 64);
			j++;
		}
	}
}

void	put_image2(t_game *img)
{
	int	i;
	int	j;

	i = -1;
	assign_img(img);
	while (img->map_mtx[++i])
	{
		j = 0;
		while (img->map_mtx[i][j] != '\0')
		{
			if (img->map_mtx[i][j] == 'C')
				mlx_put_image_to_window(img->mlx, img->window, \
				img->collector, j * 64, i * 64);
			else if (img->map_mtx[i][j] == 'E')
				mlx_put_image_to_window(img->mlx, img->window, \
				img->out, j * 64, i * 64);
			else if (img->map_mtx[i][j] == 'N')
				mlx_put_image_to_window(img->mlx, img->window, \
				img->enemy, j * 64, i * 64);
			j++;
		}
	}
}

void	put_image3(t_game *img)
{
	int	i;
	int	j;

	i = -1;
	assign_img(img);
	while (img->map_mtx[++i])
	{
		j = 0;
		while (img->map_mtx[i][j] != '\0')
		{
			if (img->map_mtx[i][j] == 'P')
			{
				if (img->left == 1)
					mlx_put_image_to_window(img->mlx, \
					img->window, img->hero_left, j * 64, i * 64);
				else
					mlx_put_image_to_window(img->mlx, \
					img->window, img->hero_right, j * 64, i * 64);
			}
			j++;
		}
	}
}
