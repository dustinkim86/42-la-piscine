/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:04:05 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/13 20:48:14 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	char			*tmp;

	i = 0;
	j = 0;
	tmp = dest;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		tmp[i] = src[j];
		j++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
