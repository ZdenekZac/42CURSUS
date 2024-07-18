/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:55:09 by zac               #+#    #+#             */
/*   Updated: 2024/07/18 13:41:37 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(t_list *list)
{
	int		str_len;
	char	*next_str;

	if(list == NULL)
		return (NULL);
// COUNT HOW MANY CHAR ARE TILL '\n' 
// SO I KNOW HOW MUCH TO MALLOC
	str_len = len_to_newline(list);
	next_str = malloc(str_len + 1);
	if (next_str == NULL)
		return (NULL);
	
// COPY THE STRING IN THE BUFFER AND RETURN IT
	copy_str(list, next_str);
	return (next_str);
}

void	append(t_list **list, char *buf)
{
	t_list	*new_node;
	t_list	*last_node;

	last_node = find_last_node(*list);
	new_node = malloc(sizeof(t_list));
}

void	create_list(t_list **list, int fd)
{
// NECESSARY TO PLACE THE \0 -> "string\0";
	int	char_read;
	char	*buf;

// SCAN LINE IF '\n'
	while(!found_newline(*list))
	{
		buf = malloc(BUFFER_SIZE + 1);
		if (buf == NULL)
			return;					// 10
		char_read = read(fd, buf, BUFFER_SIZE)
		if(!char_read)
		{
			free(buf);
			return;
		}
		buf[char_read] = '\0';
// APPEND THE NODE
		append(list, buf);
	}
}

// MOTHER FUNCTION, TOOK A FILDES, RETURNS NEXT_STRING

char	*get_next_line(int fd)
{
	static	t_list	*list = NULL;
	char			*next_line;

// fd are only positives | read gives -1 if some problem on read
if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &next_line, 0) < 0)
	return (NULL);

// Create my list till i stumble into '\n'
create_list(&list, fd);
if (list == NULL)
	return (NULL);

//fetch the line from list
next_line = get_line(list);

//
polish_list(&list);
return (next_line);
}