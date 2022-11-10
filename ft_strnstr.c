/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:27:02 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/10 16:13:59 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if(!*str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strnstr(const char *big_s, const char *little_s, size_t len)
{
	char *p_bs;
	char *p_ls;
	char cmp_fail;
	cmp_fail = 0;
	p_bs = (char *)big_s;
	p_ls = (char *)little_s;
	if (!*p_ls || len == 0)
		return (p_bs);
	if (!*p_bs)
		return (NULL);
	while (*p_bs && (size_t)(p_bs - big_s) < len) /*i_bs < len)*/
	{
		if (*p_bs == *p_ls)
		{
			while (*p_ls)
			{
				if (*p_bs != *p_ls)
					cmp_fail = 1;
				p_ls++;
				p_bs++;
			}
			if (cmp_fail == 0)
				return (p_bs - ft_strlen(little_s));
		}
		p_bs++;
	}
	return (NULL);
}

int main(void)
{
	char *s1 = "see FF your FF return FF now FF";
	char *s2 = "FF";
	size_t max = strlen(s1);
	char *i2 = ft_strnstr(s1, s2, max);
	printf("tested");
	write(1, i2, ft_strlen(i2));
	printf("\n");
	return (0);


}