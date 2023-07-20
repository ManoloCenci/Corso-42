/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcenci <mcenci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:49:30 by mcenci            #+#    #+#             */
/*   Updated: 2023/07/20 19:49:32 by mcenci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

size_t	ft_strlenn(char *str);
char	*get_next_line(int fd);
char	*ft_new(char *res);
char	*ft_putline(char *res);
char	*ft_strjoinn(char *res, char *temp);
char	*ft_search(char *s);
char	*ft_read(int fd, char *res);
#endif
