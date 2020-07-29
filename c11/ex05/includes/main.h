/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:49:30 by junhokim          #+#    #+#             */
/*   Updated: 2020/07/24 20:49:31 by junhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>

unsigned int		ft_strlen(char *str);
int					ft_atoi(char *str);
int					err(char oper, int second);
int					is_space(char c);
void				ft_putnbr(int nb);
void				sum(int first, char oper, int second);

#endif
