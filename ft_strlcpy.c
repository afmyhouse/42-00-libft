/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:59:06 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/10 11:10:58 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	l_src;
	size_t	i;

	i = 0;
	l_src = ft_strlen(src);
	if (size == 0)
		return (NULL);
	else if (l_src < size)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (size != 0)
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (i);
}
