/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:15:35 by amaria-m          #+#    #+#             */
/*   Updated: 2022/06/28 19:11:13 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_array.h>
#include <ft_arr_util.h>

t_array array(void)
{
    static t_array array = {
        ft_arrlen, ft_free_arr, ft_create_arr,
        ft_add_arr, ft_rmv_arr, ft_copy_arr, NULL
    };
    return (array);
}