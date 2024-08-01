/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:54:43 by zac               #+#    #+#             */
/*   Updated: 2024/07/30 16:22:27 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (NULL);
}

char *ft_strdup(const char *s1) {
    char *copy;
    size_t len = strlen(s1);

    copy = (char *)malloc((len + 1) * sizeof(char));
    if (!copy)
        return (NULL);
    strcpy(copy, s1);
    return (copy);
}

char *ft_strjoin(char const *s1, char const *s2) {
    char *joined;
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    joined = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (!joined)
        return (NULL);
    strcpy(joined, s1);
    strcat(joined, s2);
    return (joined);
}