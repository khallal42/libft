/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:20:11 by khallal           #+#    #+#             */
/*   Updated: 2022/11/01 11:43:53 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (i < n && (s3[i] != '\0' || s4[i] != '\0'))
	{
		if (s3[i] != s4[i])
		{
			return (s3[i] - s4[i]);
		}
		i++;
	}
	return (0);
}
