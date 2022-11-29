/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:24:28 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/14 00:49:14 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int len;
	char *dest;
	
	len = ft_strlen(s1)+ft_strlen(s2)+1;
    dest = (char*)malloc(len);
	if (!dest || !s1 || !s2)
		return (NULL);
	while (*s1)
	{
		*dest++ = *s1++;
	}
	while (*s2)
	{
		*dest++ = *s2++;
	}
    *dest = '\0';
	dest -= (len - 1);
    return (dest);
}

int	main(void)
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);

	if (!strcmp(res, "my favorite animal is the nyancat"))
	{
		printf("substr %s\n", res);
		free(res);
		printf("substr criada com sucesso\n");
		
		return 0;
	}
	free(res);
	printf("substr NÃO criada com sucesso\n");
	return 0;
}