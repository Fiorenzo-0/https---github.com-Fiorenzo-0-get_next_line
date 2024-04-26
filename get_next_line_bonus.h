/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruschi <lbruschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:35:03 by lbruschi          #+#    #+#             */
/*   Updated: 2024/04/24 17:37:08 by lbruschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 2048
# endif

# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <fcntl.h>

char	*ft_strchr(char *str, int c);
char	*ft_read(char *old_str, int fd);
char	*get_next_line(int fd);

char	*free_if(char **s1, char **s2);
size_t	ft_strlen(char *str);
char	*ft_newstrjoin(char *old_str, char *buffer);
char	*ft_extract_firstline(char *old_str);
char	*ft_extract_remaining_line(char *old_str);

#endif