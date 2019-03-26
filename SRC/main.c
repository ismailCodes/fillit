/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:53:13 by afaddoul          #+#    #+#             */
/*   Updated: 2018/12/11 13:18:32 by afaddoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_err(void)
{
	ft_putendl("error");
	exit(0);
}

t_tetris	*read_file(int *ret, char *file, t_tetris *dlist)
{
	char	*buf;
	int		fd;
	int		val;
	int		end;

	end = 0;
	buf = ft_strnew(BUFF_SIZE);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_err();
	while ((val = read(fd, buf, BUFF_SIZE)) > 0)
	{
		*ret = validation(buf);
		dlist = add_tetrim(dlist, buf);
		if (*ret == -1)
			ft_err();
		if (val == 20)
			end = 1;
		ft_bzero(buf, 21);
	}
	if (!end)
		ft_err();
	return (dlist);
}

int			main(int argc, char *argv[])
{
	int			ret;
	t_tetris	*dlist;
	char		**board;
	int			size;

	if (argc != 2)
	{
		ft_putendl("usage: ./fillit filename");
		return (0);
	}
	dlist = read_file(&ret, argv[1], NULL);
	move_upper_left(dlist);
	size = ft_next_sqrt(ret * 4);
	board = create_board(dlist, &size);
	print_board(board, size);
	return (0);
}
