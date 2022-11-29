/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:28:07 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/08 23:58:52 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.lib>*/

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	a;
	size_t	i;

	p = (unsigned char*)s;
	a = (unsigned char) c;
	i = len;
	while ((len - i))
		p[len - i++] = a;
	return (s);
}
/*
void	*ft_memset_m(void *s, int c, size_t len)
{
	char	*ptr;
	size_t	index;

	ptr = s;
	index = 0;
	while (index < len)
	{
		ptr[index] = c;
		index++;
	}
	return (s);
}
*/