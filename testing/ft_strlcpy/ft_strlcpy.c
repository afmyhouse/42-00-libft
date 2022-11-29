/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:52:14 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/10 20:10:45 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*#include "libft.h"*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	l_src;
	size_t	i;

	i = 0;
	l_src = strlen(src);
	if (size == 0)
		return (l_src);
	else if (l_src < size)
	{
		while (*src)
		{
			*dest = *src;
			src++;
			dest++;
		}
	}
	else if (size != 0)
	{
		while (i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (l_src);
}

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = strlcpy(buffer,string,size);
    printf("Return (%d) : Dest : '%s' Src '%s', size %d\n",
            r,
			buffer,
			string,
            size
          );

    r = ft_strlcpy(buffer,string,size);
	printf("Return (%d) : Dest : '%s' Src '%s', size %d\n\n",
            r,
			buffer,
			string,
            size
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}