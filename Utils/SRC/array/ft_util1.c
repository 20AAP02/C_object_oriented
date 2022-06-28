/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:06:44 by amaria-m          #+#    #+#             */
/*   Updated: 2022/06/28 19:13:10 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_arr_util.h>
#include <ft_string.h>

char    **ft_copy_arr(char **arr)
{
    char    **arr_c;
    int     i;

    if (!arr || !*arr)
        return (NULL);
    arr_c = malloc(sizeof(char *) * (ft_arrlen(arr) + 1));
    i = 0;
    while (arr && arr[i])
    {
        arr_c[i] = string().cpy(arr[i]);
        i++;
    }
    arr_c[i] = NULL;
    return (arr_c);
}
