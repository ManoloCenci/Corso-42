/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:35:32 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/24 09:36:44 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <signal.h>

void	counter_moves(t_game *mtx, int flag)
{
	mtx->print_moves = ft_itoa(mtx->moves_count);
	mlx_string_put(mtx->mlx, mtx->window, 0, (mtx->row_map * 64), \
	0x00FF0000, "MOVES: ");
	mlx_string_put(mtx->mlx, mtx->window, 80, (mtx->row_map * 64), \
	0x00FF0000, mtx->print_moves);
	if (flag)
	{
		mtx->moves_count++;
		ft_printf("Moves : %d\n", mtx->moves_count);
	}
	free(mtx->print_moves);
	mtx->print_collect = ft_itoa(mtx->colect);
	mlx_string_put(mtx->mlx, mtx->window, 0, (mtx->row_map * 64 + 20), \
	0x00FF0000, "COLLECTIBLES: ");
	mlx_string_put(mtx->mlx, mtx->window, 150, (mtx->row_map * 64 + 20), \
	0x00FF0000, mtx->print_collect);
	free(mtx->print_collect);
}

void	supreme_put_image(t_game *img, int flag)
{
	put_image(img);
	put_image2(img);
	put_image3(img);
	counter_moves(img, flag);
}

int	main(int ac, char **argv)
{
	t_game	mtx;

	if (ac < 2)
		return (0);
	get_map(argv[1], &mtx);
	supreme_check(&mtx, argv[1]);
	check_correct_comp(&mtx);
	create_win(&mtx);
	mtx.moves_count = 0;
	supreme_put_image(&mtx, 0);
	mlx_key_hook(mtx.window, movement, &mtx);
	mlx_loop(mtx.mlx);
}
