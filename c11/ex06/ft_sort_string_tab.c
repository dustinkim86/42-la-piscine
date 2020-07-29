/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:50:19 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/24 20:50:20 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0')
			return (0);
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void		ft_sort_string_tab(char **tab)
{
	int		len;
	int		i;
	int		j;
	char	*temp;

	len = 0;
	i = 0;
	while (*(tab + len))
		len++;
	while (i < len)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if ((ft_strcmp(*(tab + j), *(tab + j + 1))) > 0)
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp;
			}
			j++;
		}
		i++;
	}
}
