/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:01:03 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/13 14:58:15 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	chk_len(char *src)
{
	unsigned int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (size == 0)
		return (chk_len(src));
	while (src[i])
	{
		if (i < (size - 1))
		{
			dest[i] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (i);
}
