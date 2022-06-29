/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_util.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:16:39 by amaria-m          #+#    #+#             */
/*   Updated: 2022/06/29 10:51:52 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_LIST__H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <ft_list.h>

int     ft_lst_len(t_list *lst);
void    *ft_lst_get(t_list *lst, int index);
t_list  *ft_new_lst(void *content);
t_list  *ft_lst_add(t_list *lst, void *content);
t_list  *ft_lst_free(t_list *lst);
t_list  *ft_lst_iter(t_list *lst, void *ptr, int check);
t_list  *ft_lst_set(t_list *lst, void *content, int index);
t_list  *ft_lst_rmv(t_list *lst, int index);

#endif