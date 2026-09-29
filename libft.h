/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:24:08 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/09/29 19:19:51 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
int	ft_atoi(char *str);
void *ft_bzero(void *str ,size_t n);
int isalnum(int ch);
int	isalpha(char *str);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *memset(void *str, int c, size_t n);
int	ft_strlen(char *str);
char *strrchr(const char *str, int ch) ;