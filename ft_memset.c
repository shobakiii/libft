/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:40:38 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/10/06 15:23:38 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (s);
}
