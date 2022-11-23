/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:28 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/23 02:32:18 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len_ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start || !len)
	{
		ptr = (char *) malloc (sizeof (char));
		if (!ptr)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	if (ft_strlen(s) - start >= len)
		len_ptr = len + 1;
	else
		len_ptr = ft_strlen(s) - start + 1;
	ptr = (char *) malloc ((len_ptr) * sizeof (char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len_ptr);
	return (ptr);
}

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
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
*/