/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:27:02 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/17 22:55:54 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
//#include "libft.h"

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

char	*ft_strnstr(const char *big_s, const char *little_s, size_t len)
{
	char	*p_bs;
	size_t	len_l;

	len_l = ft_strlen(little_s);
	p_bs = (char *)big_s;
	if (!*little_s)
		return (p_bs);
	if (len == 0 || !*p_bs)
		return (NULL);
	while (*p_bs \
			&& (size_t)(p_bs + len_l - big_s) <= len \
			&& (size_t)(p_bs - big_s) <= (ft_strlen(big_s) - len_l))
	{
		if (!ft_strncmp(p_bs, little_s, len_l))
			return (p_bs);
		p_bs++;
	}
	return (NULL);
}

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
	write(1, "\n", 1);
}

static void		check_strnstr(char *big, char *little, int len)
{
	const char *str;

	if (!(str = ft_strnstr(big, little, len)))
		ft_print_result("NULL");
	else
		ft_print_result(str);
	if (!(str = strnstr(big, little, len)))
		ft_print_result("NULL");
	else
		ft_print_result(str);
		
	
}

int				main(void)
{
	//alarm(5);
	
	printf("[1] lorem ipsum dolor sit amet, lorem, 15\n");
	check_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
	
	printf("[2] lorem ipsum dolor sit amet, ipsum, 15\n");
	check_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	
	printf("[3] lorem ipsum dolor sit lorem ipsum dolor, ipsum, 35\n");
	check_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
	
	if (printf("[4] lorem ipsum dolor sit amet, \"\", 10\n"))
		check_strnstr("lorem ipsum dolor sit amet", "", 10);
	
	printf("[5] lorem ipsum dolor sit amet, ipsumm, 30\n");
	check_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	
	printf("[6] lorem ipsum dolor sit amet, dol, 30\n");
	check_strnstr("lorem ipsum dolor sit amet", "dol", 30);
	
	printf("[7] lorem ipsum dolor sit amet, consectetur, 30\n");
	check_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
	
	printf("[8] lorem ipsum dolor sit amet, sit, 10\n");
	check_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	
	printf("[9] lorem ipsum dolor sit amet, dolor, 15\n");
	check_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	
	printf("[0] lorem ipsum dolor sit amet, dolor, 0\n");
	check_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
	

	printf("[0] 0123456789, 0123456789, 10\n");
	check_strnstr("0123456789", "0123456789", 10);
	
	/*char *s1 = "AAAAAAAAAAAAA";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s1, max);
	char *i2 = ft_strnstr(s1, s1, max);*/
	
	return (0);	
}	
	/*
	else if ((arg = atoi(argv[1])) == 1)
		check_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
	else if (arg == 2)
		check_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	else if (arg == 3)
		check_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
	else if (arg == 4)
		check_strnstr("lorem ipsum dolor sit amet", "", 10);
	else if (arg == 5)
		check_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	else if (arg == 6)
		check_strnstr("lorem ipsum dolor sit amet", "dol", 30);
	else if (arg == 7)
		check_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
	else if (arg == 8)
		check_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	else if (arg == 9)
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	else if (arg == 10)
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
	return (0);*/