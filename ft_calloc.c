/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khallal <khallal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:04:43 by khallal           #+#    #+#             */
/*   Updated: 2022/11/01 11:53:46 by khallal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	if (size && count > SIZE_MAX / size)
		return (NULL);
	str = malloc(size * count);
	if (!(str))
		return (NULL);
	while (i < (size * count))
	{
		((char *)str)[i] = '\0';
		i++;
	}
	return (str);
}
