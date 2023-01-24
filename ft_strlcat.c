/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:25:22 by khallal           #+#    #+#             */
/*   Updated: 2022/10/29 15:22:46 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	dstsize;
	size_t	srcsize;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	a = ft_strlen(dst);
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (a >= size)
		return (size + srcsize);
	while (src[i] != '\0' && a < size -1)
	{
		dst[a] = src[i];
		i++;
		a++;
	}
	dst[a] = '\0';
	return (dstsize + srcsize);
}
