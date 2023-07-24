/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:58:32 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/24 09:38:25 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "libft/libft.h"
# include "get_next_line/get_next_line.h"
# include "ft_printf/ft_printf.h"
# include <mlx.h>
# include <string.h>
# include <fcntl.h>
# include <errno.h>
# include <math.h>

typedef struct t_img
{
	int		row_map;
	int		colum_map;
	char	*map;
	char	**map_mtx;
	int		size;
	void	*wall;
	void	*wall2;
	void	*empty;
	void	*hero;
	void	*hero_right;
	void	*hero_left;
	void	*collector;
	void	*enemy;
	void	*out;
	void	*mlx;
	void	*window;
	int		hi;
	int		hj;
	int		ei;
	int		ej;
	int		colect;
	int		n_count;
	char	*print_moves;
	char	*print_collect;
	int		moves_count;
	int		left;
}	t_game;

typedef enum tast {
	w = 13,
	s = 1,
	a = 0,
	d = 2,
	fu = 126,
	fg = 125,
	fd = 124,
	fs = 123,
	ESC = 53
}	t_key_move;

int		main(int ac, char **argv);
void	get_map(char *argv, t_game *m);
int		check_rect(t_game *mtx);
int		check_ext(char *name);
int		count(char *s);
int		set_len(t_game *mtx);
int		check_only(char *s, char c);
int		check_wall_rows(t_game *map);
int		count_comp(char **str, char ctr);
int		check_pce(t_game *map);
int		supreme_check(t_game *map, char *name);
int		check_correct_comp(t_game *map);
void	put_image(t_game *img);
void	put_image2(t_game *img);
void	put_image3(t_game *img);
void	supreme_put_image(t_game *img, int flag);
void	assign_img(t_game *img);
void	create_win(t_game *img);
void	move_up(t_game *m);
int		movement(int m, t_game *mtx );
void	get_hero(t_game *m);
void	move_down(t_game *m);
void	move_right(t_game *m);
void	move_left(t_game *m);
void	get_collector(t_game *m);
void	get_enemy(t_game *m);
void	move_up_enemy(t_game *m);
void	move_down_enemy(t_game *m);
void	move_right_enemy(t_game *m);
void	move_left_enemy(t_game *m);
void	counter_moves(t_game *mtx, int flag);
#endif
