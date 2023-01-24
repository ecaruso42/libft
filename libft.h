/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:17:23 by ecaruso           #+#    #+#             */
/*   Updated: 2023/01/24 16:21:04 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int				ft_isalpha(int c);
int				ft_isdigit(int b);
int				ft_isalnum(char b);
int				ft_isascii(int b);
int				ft_isprint(int b);
size_t			ft_strlen(char *str);
void			*ft_memset(void *p, int b, size_t len);
void			ft_bzero(void *p, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlcat(char *dest, char *src, size_t size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);

#endif