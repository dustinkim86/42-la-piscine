/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:38:05 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/13 14:01:14 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_string(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int first;

	i = 0;
	first = 1;
	while (str[i])
	{
		if (!check_string(str[i]))
			first = 1;
		else
		{
			if (first && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!first && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			first = 0;
		}
		i++;
	}
	return (str);
}
