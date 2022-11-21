/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:49:13 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/21 23:25:32 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t count)
{
	unsigned char	*p_str1;
	unsigned char	*p_str2;

	p_str1 = (unsigned char *)str1;
	p_str2 = (unsigned char *)str2;
	while (count--)
	{
		if (*p_str1++ != *p_str2++)
			return (p_str1[-1] - p_str2[-1]);
	}
	return (0);
}
