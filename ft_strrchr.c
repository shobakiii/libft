/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 23:44:54 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/10/07 23:44:57 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int ch)
{
	char	*lastmatch;

	lastmatch = NULL;
	while (*str != '\0')
	{
		if (*str == (char)ch)
		{
			lastmatch = (char *)str;
		}
		str++;
	}
	if (ch == '\0')
	{
		return ((char *)str);
	}
	return (lastmatch);
}
