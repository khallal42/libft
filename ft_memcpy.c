/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:19:34 by khallal           #+#    #+#             */
/*   Updated: 2022/10/27 15:40:19 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*cdst;
	char	*csrc;
	int		i;

	cdst = (char *)dst;
	csrc = (char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		cdst[i] = csrc[i];
		i++;
		n--;
	}
	return (dst);
}
