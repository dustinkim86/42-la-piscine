/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 00:57:02 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/21 00:57:51 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	length(int min, int max)
{
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int *tmp;
	int i;

	if (min >= max)
		return (0);
	i = 0;
	if (!(tmp = (int *)malloc(sizeof(int) * length(min, max))))
		return (0);
	while (min < max)
		tmp[i++] = min++;
	return (tmp);
}
