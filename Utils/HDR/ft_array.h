/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:16:58 by amaria-m          #+#    #+#             */
/*   Updated: 2022/06/27 21:34:17 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>

typedef struct ft_array
{
    int     (*len)(char **arr);
    char    **(*free)(char **arr);
    char    **(*create)(int len, ...);
    char    **(*add)(char **arr, char *str);
    char    **(*rmv)(char **arr, int i);
    char    **(*iter)(char **arr, char *(*f)(char *str));
}   t_array;

t_array array(void);


