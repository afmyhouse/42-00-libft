/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:02:51 by jtoty             #+#    #+#             */
/*   Updated: 2022/11/09 00:25:18 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
//#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	a;
	size_t	i;

	p = (unsigned char*)s;
	a = (unsigned char) c;
	i = len;
	printf("mem s = %p\n", s);
	printf("mem p = %p\n", p);
	printf("a = %c : c = %c\n", a, c);
	while ((len - i)< len)
	{
		printf("len -1 = %d\n", (int)(len - i));
		p[len - i--] = (unsigned char)c;
	}
	return (s);
}
static void		check_memset(void *mem, int c, int n, int mem_size)
{
	if (mem != ft_memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
	write(1, mem, mem_size);
	printf("\n");
	free(mem);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;
	int		mem_size;

	alarm(5);
	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)) || argc == 1)
		return (0);
	memset(mem, 'i', mem_size);
	printf("main.1 mem = %p\n", mem);
	if ((arg = atoi(argv[1])) == 1)
	{
		check_memset(mem, 'x', 5, mem_size);
		printf("main.2 mem = %p\n", mem);
	}
	else if (arg == 2)
		check_memset(mem, 'x', 15, mem_size);
	else if (arg == 3)
		check_memset(mem, '\n', 6, mem_size);
	else if (arg == 4)
		check_memset(mem, '\0', 1, mem_size);
	return (0);
}
