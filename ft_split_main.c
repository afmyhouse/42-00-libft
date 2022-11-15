/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:36:34 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/15 00:35:28 by antoda-s         ###   ########.fr       */
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

char	ft_split_slice(const char *s, int c)
{
	char *p;
	unsigned char slice_size = 0;

	p = (char *)s;
	if (!c)
		return (ft_strlen(s) +1);
	if (!s)
		return (0);	
	while (*p)
	{
		if (*p == c && *(p + 1) != c && *(p + 1) != '\0')
			return (slice_size);
		if (*p != c)
			slice_size++;	
		p++;
	}
	return (slice_size);
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

char	*ft_split(char const *s, char c)
{
	char *si = 0;
	char count_slices = ft_split_count(s, c);
	int i = 0;
	si = (char *)malloc((char)count_slices + 1);
	if (!si)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			*si = ft_split_slice(s,c);
			s += *si;
			printf ("*si = %d\n", *si);
			si++;
			i++;
		}
	}
	si -= i;
	return (si);
}

int main(void)
{
	char *s = "XXXXabXXXXXXcdfXgvbhXXprsXtvXXXX\0";
	char *res = ft_split(s, 'X');
	while (*res)
	{
		printf("array %d\n", *res);
		res++;
	}
	return (0);
}