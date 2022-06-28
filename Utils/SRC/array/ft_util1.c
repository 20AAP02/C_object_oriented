/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:06:44 by amaria-m          #+#    #+#             */
/*   Updated: 2022/06/28 19:30:22 by amaria-m         ###   ########.fr       */
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

char    **ft_copy_n_arr(char **arr, int len)
{
    char    **arr_c;
    int     i;

    if (!arr || !*arr || len < 1)
        return (NULL);
    if (len > ft_arrlen(arr))
        arr_c = malloc(sizeof(char *) * (ft_arrlen(arr) + 1));
    else
        arr_c = malloc(sizeof(char *) * (len + 1));
    i = 0;
    while (arr && arr[i] && i < len)
    {
        arr_c[i] = string().cpy(arr[i]);
        i++;
    }
    arr_c[i] = NULL;
    return (arr_c);
}

char    **ft_arr_iter(char **arr, char *(*f)(char *str))
{
    return (NULL);
}
