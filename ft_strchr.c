/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:53:06 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/09/29 19:25:16 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
    int i;
    i=0;
    while (s[i]!='\0')
    {
        if (s[i]==(char)c)
            return((char *)&s[i]);
            i++;
    }
    if (c=='\0')
    return((char *)&s[i]);
   return (NULL); 
}