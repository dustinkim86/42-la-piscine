/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:03:03 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/22 23:24:59 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tmp;
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	if (!(tmp = (char *)malloc(length(src) + 1)))
		return (NULL);
	result = tmp;
	while (src[i])
		tmp[j++] = src[i++];
	tmp[j] = '\0';
	return (result);
}
