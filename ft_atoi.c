/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:54:38 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/21 23:09:22 by antoda-s         ###   ########.fr       */
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
	while (ft_isspace(*str))
		str++;
	if (ft_issign(*str))
		signal *= ft_issign(*str++);
	while (ft_isdigit(*str))
		number = number * 10 + (*str++ - '0');
	return (number * signal);
}
