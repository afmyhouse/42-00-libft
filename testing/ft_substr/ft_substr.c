/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:28 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/14 00:40:40 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}

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

int	main(void)
{
	char *str = "01234";
	size_t size = 10;
	char *ret = ft_substr(str, 10, size);

	if (!ft_strncmp(ret, "", 1))
	{
		printf("string %s\n", str);
		printf("substr %s\n", ret);
		free(ret);
		printf("substr criada com sucesso\n");
		
		return 0;
	}
	free(ret);
	printf("substr NÃO criada com sucesso\n");
	return 0;
}