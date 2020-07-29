/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:06:17 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/22 23:33:56 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*tmp;
	char	*result;
	int		len;
	int		index;

	len = 0;
	index = 0;
	while (index < size)
		len += ft_strlen(strs[index++]);
	if (!(result = (char *)malloc(ft_strlen(sep) * (size - 1) + len + 1)))
		return (NULL);
	str = result;
	index = -1;
	while (++index < size)
	{
		tmp = strs[index];
		while (*tmp)
			*(str++) = *(tmp++);
		tmp = sep;
		while (*tmp && index < (size - 1))
			*(str++) = *(tmp++);
	}
	*str = '\0';
	return (result);
}
