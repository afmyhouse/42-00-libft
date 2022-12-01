/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:28 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/22 11:46:09 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = len + start;
	dest = (char *)malloc(len + 1);
	if (!dest || !s)
		return (NULL);
	if (ft_strlen(s) <= (size_t)start)
	{
		*dest = '\0';
		return (dest);
	}
	s += start;
	while ((start++ < i) && *s != '\0')
		*dest++ = *s++;
	*dest = '\0';
	return (dest - len);
}
