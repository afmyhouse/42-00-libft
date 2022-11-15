/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main_v2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:36:34 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/15 23:46:03 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t ft_split_count(const char *s, char c)
{
	size_t	splits;

	splits = 0;
	while (*s)
	{
		if ( *s == c && *(s + 1) != c && *(s + 1) )
			splits++;
		s++;
	}
	return (splits + 1);
}

char *ft_split_slice(const char *s, char c)
{
	size_t	split_len;
	char 	*split;

	split_len = 0;
	while (s[split_len] && s[split_len] != c)
		split_len++;
	split = (char *)malloc(split_len + 1);
	if (!split)
		return (NULL);
	while (*s && *s != c)
		*split++ = *s++;
	*split = '\0';
	return (split - split_len);
}

char	**ft_split(char const *s, char c)
{
	char **array;
	size_t i_split;
	size_t splits;

	i_split = 0;
	splits = ft_split_count(s, c);
	array = (char **)malloc(sizeof(char *) * (splits + 1));
	if (!array)
		return (NULL);
	while (*s && i_split <= splits)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
			array[i_split++] = ft_split_slice(s,c);
		while (*s && *s != c)
			s++;
	}
	array[i_split] = NULL;
	return (array);
}

int main(void)
{
	char *s = "12X00\n	123XXXXXXX1234X0X12XX123X12";
	char **res = ft_split(s, 'X');
	while (*res)
	{
		printf("array = %s\n", *res);
		res++;
	}
	return (0);
}
