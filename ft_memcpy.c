/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:11:28 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/09/29 19:26:14 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
void memcpy(void *dest, const void *src , size_t n)
{
size_t i;
i=0;
while (i<n)
{
    ((unsigned char *)dest)[i]=((const unsigned char *)src)[i];
        i++;
}
return(dest);

}