/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:33:46 by khallal           #+#    #+#             */
/*   Updated: 2022/10/27 14:46:43 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*kh;
	unsigned char	*ha;

	i = 0;
	kh = (unsigned char *)s1;
	ha = (unsigned char *)s2;
	while (i < n)
	{
		if (kh[i] != ha[i])
		{
			return (kh[i] - ha[i]);
		}
		i++;
	}
	return (0);
}
