/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:28:13 by khallal           #+#    #+#             */
/*   Updated: 2022/10/31 15:01:15 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*k;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	k = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!k)
		return (NULL);
	i = 0;
	while (s[i])
	{
		k[i] = (*f)(i, s[i]);
		i++;
	}
	k[i] = '\0';
	return (k);
}
