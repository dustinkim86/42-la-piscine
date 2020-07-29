/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:04:03 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/22 13:04:04 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print_size(int size)
{
	char c;

	if (size == 0)
		return ;
	c = '0' + size % 10;
	print_size(size / 10);
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *arrs)
{
	int i;

	i = 0;
	while (arrs[i].str)
	{
		write(1, arrs[i].str, arrs[i].size);
		write(1, "\n", 1);
		if (arrs[i].size)
			print_size(arrs[i].size);
		else
		{
			write(1, "\0", 1);
		}
		write(1, "\n", 1);
		write(1, arrs[i].copy, arrs[i].size);
		write(1, "\n", 1);
		++i;
	}
}
