/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:18:10 by ecaruso           #+#    #+#             */
/*   Updated: 2023/01/17 18:38:43 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char b)
{
	if (b >= 32 && b <= 127)
		return (1);
	else
		return (0);
}