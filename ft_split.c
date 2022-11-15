/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:12:25 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/15 00:02:49 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int	ft_slice_count(char const *s, char c)
{
	int	i_s;
	int	slices;

	i_s = 0;
	slices = 0;
	if (s[i_s] == c)
		slices--;
	while (*s == c)
		s++;
	while (*s != '\0')
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			slices++;			
		s++;
	}
	slices++;
	return (slices);
}

char	*malloc_strings(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		slices;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	slices = ft_slice_count(s, c);
	tab = (char **)malloc(sizeof(char *) * (slices + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = malloc_strings(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

int main(void)
{
	char *s = "abXcdfXghXXprsXtuv\0";
	char **res = ft_split(s, 'X');
	int i = 0;
	while (*res)
	{
		printf("array %s\n", *res);
		res++;
	}
	res = ft_split(s, 'X');
	while( res[i]!= NULL ) {
      printf( " %s\n", res[i] ); //printing each res
//      res = ft_split(NULL, ' ');
	  i++;
   }
	return (0);
}