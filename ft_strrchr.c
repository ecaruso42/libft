/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:51:52 by ecaruso           #+#    #+#             */
/*   Updated: 2023/01/24 18:13:54 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	a;

	a = 1 + ft_strlen((char *)(s));
	while (a-- > 0)
	{
		if (c == s[a])
			return ((char *)(s + a));
	}
	if (c == '\0')
		return ((char *)(s + a));
	return (NULL);
}
