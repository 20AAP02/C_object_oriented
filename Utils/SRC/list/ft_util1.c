/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 00:54:51 by amaria-m          #+#    #+#             */
/*   Updated: 2022/06/29 01:42:05 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_lst_util.h>

t_list  *ft_lst_iter(t_list *lst, void *ptr, int check)
{
    t_list  *mem;
    void    *temp;
    void *(*f)(void *lst);

    if (!lst)
        return (lst);
    f = ptr;
    mem = lst;
    while (mem)
    {
        temp = mem->content;
        mem->content = f(mem->content);
        if (check)
            free(temp);
        mem = mem->next;
    }
    return (lst);   
}