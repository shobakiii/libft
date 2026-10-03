/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:52:20 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/09/29 19:25:25 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "libft.h"
char *strrchr(const char *str, int ch) 
{
    char *lastmatch = NULL;

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
        return (char *)str;
    }

    return lastmatch;
}
