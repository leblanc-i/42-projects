/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 20:46:58 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/30 20:47:07 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(GET_NEXT_LINE_H)
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# if !defined BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(const char *dest, const char *src);
char	*ft_strchr(const char *s, int c);

#endif
