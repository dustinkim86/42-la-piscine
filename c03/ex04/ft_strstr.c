/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:14:49 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/13 20:52:51 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	find_i;
	int	idx;

	i = 0;
	find_i = 0;
	idx = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] != to_find[find_i])
			find_i = 0;
		if (str[i] == to_find[find_i] && to_find[find_i] != '\0')
			find_i++;
		if (to_find[find_i] == '\0')
			break ;
		i++;
	}
	if (str[i] == '\0' && to_find[i] != '\0')
		return (0);
	idx = i - find_i;
	return (&str[idx + 1]);
}
