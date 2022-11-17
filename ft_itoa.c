/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:54:29 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/17 00:28:58 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_itoa_len(int n)
{
	int i;

	i = 0;
	if (n <= 0)
		i++;
    while (n && i++ >= 0)
        n/=10;
    return (i);
}

char	*ft_itoa(int n)
{
	char        *res;
    int         a_len;
    long int    ln;
    
    a_len = ft_itoa_len(n);
	if((res = (char *)malloc((a_len+1) * sizeof(char))))
    {
        res[a_len] = '\0';
        ln = (long int)n * 10;
        if (!ln)
            res[0] = '0';
        if (ln < 0)
        {
            ln = -ln;
            res[0] = '-';
        }
        while ((ln /= 10) && a_len-- >= 0)
            res[a_len] = ln % 10 + 48;
        return (res);       
    }
    return (NULL);
}
//
#include <stdio.h>
int main(void)
{
    int nbr;
    nbr = -2147483648;
    printf("Int = %d : Char = %s\n", nbr, ft_itoa(nbr));
}
//