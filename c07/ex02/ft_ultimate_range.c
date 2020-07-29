/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 00:58:40 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/21 00:58:43 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	length(int min, int max)
{
	return (max - min);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (0);
	i = 0;
	if (!(*range = (int *)malloc(sizeof(int) * length(min, max))))
		return (0);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
