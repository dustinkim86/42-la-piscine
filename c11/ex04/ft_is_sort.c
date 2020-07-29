/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:48:32 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/24 20:48:33 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int			i;
	int			sign;
	int			flag;
	int			tmp;

	i = -1;
	sign = 0;
	flag = 0;
	while (++i < length - 1)
	{
		tmp = ((*f)(*(tab + i), *(tab + i + 1)));
		if (flag)
		{
			if (sign > 0 && tmp < 0)
				return (0);
			if (sign < 0 && tmp > 0)
				return (0);
		}
		else if (tmp != 0)
		{
			flag = 1;
			sign = tmp;
		}
	}
	return (1);
}
