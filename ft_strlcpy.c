/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:59:06 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/22 11:37:07 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l_src;
	size_t	i;

	i = 0;
	l_src = ft_strlen(src);
	if (size == 0)
		return (l_src);
	else if (l_src < size)
	{
		while (*src)
			*dst++ = *src++;
	}
	else if (size != 0)
	{
		while (i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (l_src);
}
