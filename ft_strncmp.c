/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:45:54 by psotto-m          #+#    #+#             */
/*   Updated: 2022/11/10 16:43:18 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	unsigned int	n;
	char			nc;
	char			*s1;
	char			*s2;

	if (argc != 4)
	{
		return (0);
	}
	(void)argc;
	s1 = argv[1];
	s2 = argv[2];
	nc = argv[3][0];
	n = nc - 0x30;
	printf("%s  ", s1);
	printf("%s\n", s2);
	printf("%d\n", n);
	printf("Diff FT  %d\n", ft_strncmp(s1, s2, n));
	printf("Diff LIBRARY %d\n", strncmp(s1, s2, n));
}*/

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
