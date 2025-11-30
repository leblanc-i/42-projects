/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 23:02:15 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/26 23:40:27 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(GET_NEXT_LINE_BONUS_H)
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# if !defined BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# if !defined FD_MAX
#  define FD_MAX 1024
# endif

size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(const char *dest, const char *src);
char	*ft_strchr(const char *s, int c);

#endif
