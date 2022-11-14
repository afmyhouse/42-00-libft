/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:28 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/14 00:25:29 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	unsigned int i;
	char *dest;
	
	i = len + start;
    dest = (char*)malloc(len + 1);
	if (!dest || !src)
		return (NULL);
	if (ft_strlen(src) <= (size_t)start)
	{
		*dest = '\0';
		return (dest);
	}
	src += start;
	while ((start++ < i) && *src != '\0')
        *dest++ = *src++;
    *dest = '\0';
    return (dest - len);
}
