/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:35:53 by khallal           #+#    #+#             */
/*   Updated: 2022/10/26 15:23:59 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*k;
	char	*h;
	size_t	j;

	k = (char *)haystack;
	h = (char *)needle;
	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return ((char *)haystack);
	while (k[i] != '\0' && i < len)
	{
		j = 0;
		while (k[i] && k[i + j] == h[j] && (i + j) < len)
		{
			if (h[j + 1] == '\0')
				return (&k[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
