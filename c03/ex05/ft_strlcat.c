/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:14:58 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/13 21:08:43 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				check_length(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = dest;
	if ((unsigned int)check_length(dest) > size)
		return (size + (unsigned int)check_length(src));
	else
	{
		while (*tmp && i < size)
		{
			tmp++;
			i++;
		}
		while (*src && i < size - 1)
		{
			*tmp = *src;
			tmp++;
			src++;
			i++;
		}
		return ((unsigned int)check_length(src) +
			(unsigned int)check_length(dest));
	}
}
