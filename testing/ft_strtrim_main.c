/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:28:11 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/16 15:29:40 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	while (*p_s)
		p_s++;
	while (p_s >= (unsigned char *)s && *p_s != (unsigned char)c)
		p_s--;
	if (*p_s == (unsigned char)c)
		return ((char *)p_s);
	return (NULL);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	while (*p_s && *p_s != (unsigned char)c)
		p_s++;
	if (c == '\0' || *p_s == (unsigned char)c)
		return ((char *)p_s);
	return (NULL);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(((size_t)ft_strlen(src) + 1)*sizeof(char));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	len;
	char	*p;

	if (!s || !set)
		return (NULL);
	while (ft_strchr(set, *s) && *s)
		s++;
	if (!*s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	while (ft_strchr(set, s[len-1]))
		len--;
	p = ft_substr(s, 0, len);
	return (p);
}

int main(void)
{
	char *s = "12";
	char *set = "12";
	printf("resultado = %s\n", ft_strtrim(s, set));
	return (0);
}