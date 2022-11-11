/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:51:40 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/10 22:51:41 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_result(int nbr, int size, char sign_nbr)
{
    int nbr_p[size];
    int i;
    i = 0;

    while(i <= size - 1 )
    {
        nbr_p[i] = nbr % 10 + 0x30;
        nbr /= 10;
        i++;
    }
    write(1, &sign_nbr, 1);
    i = size-1;
    while(i >= 0)
    {
        write(1, &nbr_p[i], 1);
        i--;
    }
}

void    ft_putnbr(int nbr)
{
    int size_nbr;
    int nbr_by_10;
    char sign_nbr;

    sign_nbr ='\0';

    if( nbr < 0)
    {
        sign_nbr = '-';
        nbr *= -1;
    }

    nbr_by_10 = nbr;
    size_nbr = 0;

    while(nbr_by_10 != 0)
    {
        size_nbr++;
        nbr_by_10 /= 10;
    }
    if(size_nbr == 0) size_nbr = 1;
    ft_print_result(nbr, size_nbr, sign_nbr);
}

int main(void)
{
    int nbr;
    nbr = -2345023;
    ft_putnbr(nbr);
}
