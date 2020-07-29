/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 13:22:04 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/20 22:14:48 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (++i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_is_prime(4));
}
