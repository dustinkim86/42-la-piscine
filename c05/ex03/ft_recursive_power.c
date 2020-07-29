/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 13:19:09 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/20 13:43:18 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int num;

	num = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	num = nb * ft_recursive_power(nb, power - 1);
	return (num);
}
