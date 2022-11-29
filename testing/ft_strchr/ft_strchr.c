/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:27:02 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/27 18:51:55 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

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

int	main(void)
{
	char	*test = "";
	char	c = '\\';

	printf(" go test lb_strchr! ");
	if (ft_strchr(test, c))
		printf("&test = %p, lb_strchr = %s, c=\"%c\" ptr = %p\n", test, strchr(test, c), *strchr(test, c)-0, strchr(test, c));
	else
		printf("NULL\n");
	printf(" go test ft_strchr! ");
	if (strchr(test, c))
		printf("&test = %p, ft_strchr = %s, c=\"%c\" ptr = %p\n", test, ft_strchr(test, c), *ft_strchr(test, c)-0, ft_strchr(test, c));
	else
		printf("NULL\n");
	return (0);
}
