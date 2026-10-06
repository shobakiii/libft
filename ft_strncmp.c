/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:32:37 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/10/06 16:20:49 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] && s2[i] == s1[i])
	{
		i++;
		if (i == n)
		{
			return (0);
		}
	}
    return (((unsigned char)s1[i] - (unsigned char )s2[i]));
}