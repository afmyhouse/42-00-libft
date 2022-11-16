/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:54:38 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/16 16:10:45 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' \
	|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_issign(char c)
{
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	signal;
	int	index;
	int	number;

	index = 0;
	signal = 1;
	number = 0;
	while (ft_isspace(str[index]))
		index++;
	if (ft_issign(str[index]) != 0)
		signal *= ft_issign(str[index++]);
	while (ft_isdigit(str[index]))
		number = number * 10 + (str[index++] - '0');
	return (number * signal);
}
