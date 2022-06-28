/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_util.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:38:55 by amaria-m          #+#    #+#             */
/*   Updated: 2022/06/27 21:33:20 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_UTIL_H
# define ARRAY_UTIL_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int     ft_arrlen(char **arr);
char    **ft_free_arr(char **arr);
char    **ft_create_arr(int len, ...);
char    **ft_add_arr(char **arr, char *str);

#endif
