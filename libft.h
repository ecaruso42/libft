/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:17:23 by ecaruso           #+#    #+#             */
/*   Updated: 2023/01/18 19:49:39 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_isalpha(char b);
int		ft_isdigit(char b);
int		ft_isalnum(char b);
int		ft_isascii(char b);
int		ft_isprint(char b);
int		ft_strlen(char *str);
void	ft_memset(void *p, int b, size_t len);
void	ft_bzero(void *p, size_t len);

#endif