/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:56:44 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/10/06 15:05:54 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*get_word(char const *s, char c, size_t *index)
{
	size_t	start;
	size_t	end;
	char	*word;

	while (s[*index] && s[*index] == c)
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
		(*index)++;
	end = *index;
	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, end - start + 1);
	return (word);
}

static void	free_words(char **words, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char **words;
	size_t count;
	size_t i;
	size_t pos;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	words = malloc((count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < count)
	{
		words[i] = get_word(s, c, &pos);
		if (!words[i])
		{
			free_words(words, i);
			return (NULL);
		}
		i++;
	}
	words[count] = NULL;
	return (words);
}