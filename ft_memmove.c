/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:44:32 by khallal           #+#    #+#             */
/*   Updated: 2022/10/27 15:51:39 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*khalifa;
	char	*hallal;
	int		i;

	i = 0;
	khalifa = (char *)src;
	hallal = (char *)dst;
	if (!src && !dst)
		return (NULL);
	if (khalifa < hallal)
	{
		i = len - 1;
		while (i >= 0)
		{
			hallal[i] = khalifa[i];
			i--;
		}
	}
	else
		ft_memcpy(hallal, khalifa, len);
	return (hallal);
}
