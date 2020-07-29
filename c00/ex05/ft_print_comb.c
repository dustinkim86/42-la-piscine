/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:56:17 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/06 17:04:10 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int *number)
{
	write(1, &number[0], 1);
	write(1, &number[1], 1);
	write(1, &number[2], 1);
	if (number[0] != 55)
		write(1, &", ", 2);
}

void	ft_print_comb(void)
{
	int number[3];

	number[0] = 48;
	number[1] = 48;
	number[2] = 48;
	while (number[0] <= 57)
	{
		if ((number[0] < number[1]) && (number[1] < number[2]))
			print_numbers(number);
		if (number[2]++ >= 57)
		{
			number[2] = 48;
			number[1]++;
		}
		if (number[1] == 58)
		{
			number[1] = 48;
			number[0]++;
		}
	}
}
