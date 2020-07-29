/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:50:01 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/24 20:50:02 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

unsigned int		ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int					ft_atoi(char *str)
{
	unsigned int	i;
	int				minus;
	int				to_i;
	unsigned int	len_str;

	minus = 1;
	to_i = 0;
	i = 0;
	len_str = ft_strlen(str);
	while (is_space(*(str + i)) == 1 && i < len_str)
		i++;
	while ((*(str + i) == '+' || *(str + i) == '-') && i < len_str)
	{
		if (*(str + i) == '-')
			minus *= -1;
		i++;
	}
	while ((*(str + i) >= '0' && *(str + i) <= '9') && i < len_str)
	{
		to_i = to_i * 10 + (*(str + i) - '0');
		i++;
	}
	return (to_i * minus);
}

int					err(char oper, int second)
{
	if (oper == '/' && second == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	if (oper == '%' && second == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

int					main(int argc, char **argv)
{
	int				first;
	int				second;
	char			oper;

	if (argc != 4)
		return (0);
	first = ft_atoi(*(argv + 1));
	second = ft_atoi(*(argv + 3));
	oper = *(*(argv + 2));
	if (err(oper, second))
		return (0);
	else
	{
		sum(first, oper, second);
		write(1, "\n", 1);
	}
	return (0);
}
