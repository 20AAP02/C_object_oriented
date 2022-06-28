/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 16:32:15 by amaria-m          #+#    #+#             */
/*   Updated: 2022/06/27 20:46:46 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stdlib.h>

typedef struct s_string
{
	int     (*len)(const char *str);
    char    *(*cpy)(const char *str);
    char    *(*cpy_n)(const char *str, int n);
    char    *(*strnstr)(const char *haystack, const char *needle, size_t len);
    int		(*contains)(const char *str, const char *hey);
    int		(*cmp)(const char *str1, const char *str2);
    int		(*cmp_n)(const char *str, const char *hey, int n);
    int		(*is_spc)(char c);
    char	*(*join)(const char *str1, const char *str2);
    char	*(*replace)(const char *str1, const char *str2, const char *hey);
    char	**(*split)(char const *s, char *div);
    int		(*atoi)(const char *str);
    char    *(*trim)(const char *str);
    char	*(*substr)(char const *s, unsigned int start, size_t len);
}	t_string;

t_string	string(void);

#endif
