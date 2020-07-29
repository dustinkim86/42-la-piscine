/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:03:57 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/22 13:03:58 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void				ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (src != 0)
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arrs;
	int			i;

	if (!(arrs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		arrs[i].size = len(av[i]);
		arrs[i].str = (char *)malloc(arrs[i].size + 1);
		arrs[i].copy = (char *)malloc(arrs[i].size + 1);
		ft_strcpy(arrs[i].str, av[i]);
		ft_strcpy(arrs[i].copy, av[i]);
		++i;
	}
	arrs[i].str = '\0';
	return (arrs);
}
