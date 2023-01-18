/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:08:06 by ecaruso           #+#    #+#             */
/*   Updated: 2023/01/18 19:56:04 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*ptr;
	size_t i;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}

}


int main(void)
{
	char *str = "sssss";
	ft_bzero(str, 3);
	printf("%s", str);
}
