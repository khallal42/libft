/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:51:01 by khallal           #+#    #+#             */
/*   Updated: 2022/10/26 15:24:54 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	unsigned int	j;
	char			*khalifa;

	i = 0;
	j = start;
	if (!s)
		return (0);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	khalifa = malloc(sizeof(char) * len + 1);
	if (!(khalifa))
		return (NULL);
	while (j < (len + start))
	{
		khalifa[i] = s[j];
		i++;
		j++;
	}
	khalifa[i] = '\0';
	return (khalifa);
}
