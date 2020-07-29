/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:47:38 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/24 20:47:41 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int		*ret;
	int		i;

	ret = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		*(ret + i) = (*f)(*(tab + i));
		i++;
	}
	return (ret);
}
