/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:49:46 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/24 20:49:49 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void				ft_putnbr(int nb)
{
	char			c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

int					is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void				sum(int first, char oper, int second)
{
	if (oper == 43)
		ft_putnbr(first + second);
	else if (oper == 45)
		ft_putnbr(first - second);
	else if (oper == '*')
		ft_putnbr(first * second);
	else if (oper == 47)
		ft_putnbr(first / second);
	else if (oper == 37)
		ft_putnbr(first % second);
	else
		write(1, "0", 1);
}
