/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 11:23:03 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/19 11:23:07 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_cnt;
int g_num;
int g_i;

int		check_number(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	g_i = 0;
	g_num = 0;
	g_cnt = 0;
	if (str == '\0')
		return (0);
	else
	{
		while (str[g_i] <= 32)
			g_i++;
		while (str[g_i] == '-' || str[g_i] == '+')
		{
			if (str[g_i] == '-')
				g_cnt++;
			g_i++;
		}
		while (check_number(str[g_i]))
		{
			g_num = (g_num * 10) + (str[g_i] - '0');
			g_i++;
		}
		if (g_cnt % 2 != 0)
			g_num *= -1;
		return (g_num);
	}
}
