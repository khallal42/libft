/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:37:09 by khallal           #+#    #+#             */
/*   Updated: 2022/10/29 15:24:50 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*khalifa;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	khalifa = malloc(sizeof(char) * (j + 1));
	if (!(khalifa))
		return (NULL);
	while (s1[i])
	{
		khalifa[i] = ((char *)s1)[i];
		i++;
	}
	khalifa[i] = '\0';
	return (khalifa);
}
