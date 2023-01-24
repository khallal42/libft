/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:44:42 by khallal           #+#    #+#             */
/*   Updated: 2022/10/27 14:46:39 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sr;

	i = 0;
	sr = (unsigned char *)s;
	while (i < n)
	{
		if (sr[i] == (unsigned char)c)
			return (&sr[i]);
		i++;
	}
	return (0);
}
