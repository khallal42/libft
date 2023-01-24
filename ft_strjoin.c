/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:00:27 by khallal           #+#    #+#             */
/*   Updated: 2022/10/29 15:25:13 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*k;

	i = 0;
	j = 0;
	if (!s2 || !s1)
		return (0);
	k = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!(k))
		return (NULL);
	while (s1[i])
	{
		k[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		k[i] = s2[j];
		i++;
		j++;
	}
	k[i] = '\0';
	return (k);
}
