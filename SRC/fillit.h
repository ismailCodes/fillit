/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:45:58 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/11 12:51:06 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "../libft/libft.h"
# define BUFF_SIZE 21

typedef struct		s_dlist
{
	struct s_dlist	*prev;
	struct s_dlist	*next;
	int				xcoord[4];
	int				ycoord[4];
	char			alph;
}					t_tetris;

typedef struct		s_coord
{
	int		x;
	int		y;
}					t_coord;

int					validation(char *buf);
int					char_checker(char *buf);
int					both_char_checker(char *buf);
int					four_newline(char *buf);
int					check_links(char *buf);
int					**cordx_y_filler(char **sqr);
t_tetris			*fill_coord(t_tetris *node, char *buf);
t_tetris			*add_tetrim(t_tetris *head, char *buf);
int					coord_min(int *tab);
void				move_upper_left(t_tetris *head);
int					is_safe(t_tetris *node, char **board, t_coord pos,
		int size);
int					check_all_coord(t_coord pos, char **board,
		t_tetris *node, int size);
void				set_reset(t_coord pos, char **board, t_tetris *node,
		int flag);
int					back_track(t_tetris *head, char **board, int size);
void				print_board(char **board, int size);
char				**create_board(t_tetris *dlist, int *size);

#endif
