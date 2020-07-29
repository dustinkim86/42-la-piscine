/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:48:23 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/13 14:48:52 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	change_hex(unsigned char c)
{
	unsigned char s;
	unsigned char r;

	if (!(c >= ' ' && c <= '~'))
	{
		s = c / 16 + '0';
		if (s >= ':')
			s += 39;
		r = c % 16 + '0';
		if (r >= ':')
			r += 39;
		ft_putchar('\\');
		ft_putchar(s);
		ft_putchar(r);
	}
	else
		ft_putchar(c);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		change_hex((unsigned char)str[i]);
		i++;
	}
}
