/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main_v2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:36:34 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/15 01:00:55 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strchr(const char *s, int c)
{
	char	*p_s;

	p_s = (char *)s;
	while (*p_s)
	{
		if (*p_s == c)
			return ((char *)p_s);
		p_s++;
	}
	if (c == '\0')
		return ((char *)p_s);
	return (NULL);
}

size_t	ft_split_len(const char *s, int c)
{
	size_t split_size = 0;

	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			return (split_size);
		if (*s != c)
			split_size++;	
		s++;
	}
	return (split_size);
}

unsigned char ft_split_count(const char *s, char c)
{
	unsigned char i;
	
	i = 0;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			i++;
		s++;
	}
	return (i + 1);
}

char *ft_split_slice(const char *s, char c)
{
	size_t	len;
	char 	*res;
	
	len = ft_split_len(s,c);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	while (*s && *s != c)
	{
		*res++ = *s++;
	}
	*res = '\0';
	return (res - len);
}

char	**ft_split(char const *s, char c)
{
	char **array;
	char splits = ft_split_count(s, c);
	int i = 0;

	printf ("split : %c\n", splits);
	
	array = (char **)malloc(sizeof(char *) * (splits + 1));
	if (!array)
		return (NULL);
	while (*s)
	{
		if (*s == c && *s)
			s++;
		else if (*s && *s != c)
		{
			if (i <= splits)
				array[i] = ft_split_slice(s,c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	array[i] = NULL;
	return (array);
}

int main(void)
{
	char *s = "XXXXabXXXXXXcdfXgvbhXXprsXtvXXXX\0";
	char **res = ft_split(s, 'X');
	while (*res)
	{
		printf("array %s\n", *res);
		res++;
	}
	return (0);
}