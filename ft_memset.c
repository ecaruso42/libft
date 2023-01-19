/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:02:28 by ecaruso           #+#    #+#             */
/*   Updated: 2023/01/19 16:05:25 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *p, int b, size_t len)
{
	unsigned char	*a;

	a = p;
	while (len > 0)
	{
		*p = (unsigned char) a;
		p++;
		len--;
	}
	return (a);
}
