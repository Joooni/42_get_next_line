/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 08:47:58 by jsubel            #+#    #+#             */
/*   Updated: 2021/12/21 10:36:41 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char		*get_next_line(int fd);
void		*ft_memmove(void *dst, const void *src, size_t len);
char		*ft_strcat(char *s1, char *s2);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *s);
#endif