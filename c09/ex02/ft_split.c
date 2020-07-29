/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 19:48:12 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/24 19:48:14 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_in_set(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int		get_word_count(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (!char_in_set(*str, charset))
		{
			cnt++;
			str++;
			while (*str && !char_in_set(*str, charset))
				str++;
		}
		else
			str++;
	}
	return (cnt);
}

char	*split_words(char **str, char *charset)
{
	char	*word;
	char	*word_tptr;
	char	*temp;

	word_tptr = *str;
	while (*word_tptr && char_in_set(*word_tptr, charset))
		word_tptr++;
	*str = word_tptr;
	while (*word_tptr && !char_in_set(*word_tptr, charset))
		word_tptr++;
	if (!(word = (char *)malloc((int)(word_tptr - *str))))
		return (0);
	temp = word;
	while (*str < word_tptr)
		*temp++ = *((*str)++);
	*temp = '\0';
	while (**str && char_in_set(**str, charset))
		++(*str);
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**words_tptr;
	char	**words;
	int		cnt;

	cnt = get_word_count(str, charset);
	if (!(words = (char **)malloc(sizeof(char *) * (cnt + 1))))
		return (0);
	words_tptr = words;
	while (cnt--)
		if (!(*words_tptr++ = split_words(&str, charset)))
			return (0);
	*words_tptr = 0;
	return (words);
}
