/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:22:07 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/20 15:27:38 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	sorting(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i++ < argc)
	{
		j = 1;
		while (++j < argc)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) < 0)
			{
				tmp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = tmp;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	int	idx;

	sorting(argc, argv);
	while (argc-- > 1)
	{
		idx = 0;
		while (argv[argc][idx])
			write(1, &argv[argc][idx++], 1);
		write(1, "\n", 1);
	}
}
