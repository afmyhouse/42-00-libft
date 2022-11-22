/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:59:06 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/22 11:37:47 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		l_free;
	size_t		l_dest;

	l_free = size;
	d = dst;
	s = src;
	while (l_free-- != 0 && *d != '\0')
		d++;
	l_dest = d - dst;
	l_free = size - l_dest;
	if (l_free == 0)
		return (l_dest + ft_strlen(s));
	while (*s != '\0')
	{
		if (l_free != 1)
		{
			*d++ = *s;
			l_free--;
		}
		s++;
	}
	*d = '\0';
	return (l_dest + (s - src));
}
