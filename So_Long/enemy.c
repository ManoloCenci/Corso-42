/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:10:49 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/24 09:36:29 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_enemy(t_game *m)
{
	int	i;
	int	j;

	i = 0;
	while (m->map_mtx[i])
	{
		j = 0;
		while (m->map_mtx[i][j])
		{
			if (m->map_mtx[i][j] == 'N')
			{
				m->ei = i;
				m->ej = j;
				m->n_count++;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	move_up_enemy(t_game *m)
{
	mlx_clear_window(m->mlx, m->window);
	get_enemy(m);
	if (m->map_mtx[m->ei - 1][m->ej] == '0')
	{
		m->map_mtx[m->ei - 1][m->ej] = 'N';
		m->map_mtx[m->ei][m->ej] = '0';
	}
	else if (m->map_mtx[m->ei - 1][m->ej] == 'P')
		exit(1);
	supreme_put_image(m, 0);
}

void	move_down_enemy(t_game *m)
{
	mlx_clear_window(m->mlx, m->window);
	get_enemy(m);
	if (m->map_mtx[m->ei + 1][m->ej] == '0')
	{
		m->map_mtx[m->ei + 1][m->ej] = 'N';
		m->map_mtx[m->ei][m->ej] = '0';
	}
	else if (m->map_mtx[m->ei + 1][m->ej] == 'P')
		exit(1);
	supreme_put_image(m, 0);
}

void	move_right_enemy(t_game *m)
{
	mlx_clear_window(m->mlx, m->window);
	get_enemy(m);
	if (m->map_mtx[m->ei][m->ej + 1] == '0')
	{
		m->map_mtx[m->ei][m->ej + 1] = 'N';
		m->map_mtx[m->ei][m->ej] = '0';
	}
	else if (m->map_mtx[m->ei][m->ej + 1] == 'P')
		exit(1);
	supreme_put_image(m, 0);
}

void	move_left_enemy(t_game *m)
{
	mlx_clear_window(m->mlx, m->window);
	get_enemy(m);
	if (m->map_mtx[m->ei][m->ej - 1] == '0')
	{
		m->map_mtx[m->ei][m->ej - 1] = 'N';
		m->map_mtx[m->ei][m->ej] = '0';
	}
	else if (m->map_mtx[m->ei][m->ej - 1] == 'P')
		exit(1);
	supreme_put_image(m, 0);
}
