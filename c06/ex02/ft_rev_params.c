/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:22:37 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/20 15:22:38 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	while (argc-- > 1)
	{
		i = 0;
		while (argv[argc][i])
			write(1, &argv[argc][i++], 1);
		write(1, "\n", 1);
	}
}
