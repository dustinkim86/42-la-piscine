/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:22:30 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/20 15:22:31 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int num;

	num = 0;
	if (argc >= 2)
		while (++num < argc)
		{
			i = 0;
			while (argv[num][i])
				write(1, &argv[num][i++], 1);
			write(1, "\n", 1);
		}
}
