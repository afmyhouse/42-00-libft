/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:28 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/11 23:52:41 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
/*char	*ft_substr(const char *src, int start, int len)*/
{
    // get the length required for the destination string
	int i;
	char *dest;
	
	i = start;
    // allocate (len + 1) chars for destination (+1 for extra null character)
    dest = (char*)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
    // extracts characters between m'th and n'th index from source string
    // and copy them into the destination string
	src += start;
	while (src < (src + start + len) && *src != '\0')
        *dest++ = *src++;
    // null-terminate the destination string
    *dest = '\0';
 
    // return the destination string
    return (dest - len);
}