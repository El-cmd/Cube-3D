/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:47:45 by alilin            #+#    #+#             */
/*   Updated: 2023/07/27 19:10:03 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <../minilibx-linux/mlx.h>
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

#define ESC 65307
#define LEFT 97
#define RIGHT 100
#define UP 119
#define DOWN 115

typedef struct s_mlx
{
    void *mlx;
    void *win;
}   t_mlx;

int     main_parse(char *av);
void    hakai(t_mlx *data);
int     key_funct(int code, t_mlx *data);

#endif