/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:09:35 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/10/06 16:24:06 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t	strlcpy(char *dest, char *src, size_t size)
{
	size_t i;
	i = 0;

	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src)
	{
		i++;
	}
	return (i);
}