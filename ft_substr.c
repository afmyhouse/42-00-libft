/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:28 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/17 13:59:07 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = len + start;
	dest = (char *)malloc(len + 1);
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
