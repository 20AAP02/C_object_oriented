/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:31 by amaria-m          #+#    #+#             */
/*   Updated: 2022/06/29 10:52:09 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdarg.h>

typedef struct ft_list
{
    void            *content;
    struct ft_list  *next;
}                   t_list;

typedef struct ft_list_utils
{
    int     (*len)(t_list *lst);
    void    *(*get)(t_list *lst, int index);
    t_list  *(*new)(void *content);
    t_list  *(*add)(t_list *lst, void *content);
    t_list  *(*free)(t_list *lst);
    t_list  *(*iter)(t_list *lst, void *ptr, int check);
    t_list  *(*set)(t_list *lst, void *content, int index);
    t_list  *(*rmv)(t_list *lst, int index);
}           t_list_utils;

t_list_utils    list(void);

#endif
