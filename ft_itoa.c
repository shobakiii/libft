/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:58:19 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/10/06 15:04:04 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_itoa(int b)
{
	char *str;
	long num;
	size_t len;

	num = b;
	if (num <= 0)
		len = 1;
	else
		len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = b;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (len-- > (num < 0))
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}