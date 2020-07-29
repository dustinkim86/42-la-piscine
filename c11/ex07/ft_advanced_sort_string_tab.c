/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:50:36 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/24 20:50:39 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*))
{
	int		len;
	int		i;
	int		j;
	char	*tmp;

	len = 0;
	i = 0;
	while (*(tab + len))
		len++;
	while (i < len)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if ((*cmp)(*(tab + j), *(tab + j + 1)) > 0)
			{
				tmp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j) = tmp;
			}
			j++;
		}
		i++;
	}
}
