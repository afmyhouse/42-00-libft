/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:54:29 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/16 16:11:45 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
{
	long int	ln;
	int n-size;
	char *res;

	n_size = 0;
	if (n < 0)
		ln *= -n;
		n_sign = '-';
		n_size = 1;
	while (ln)
	{
		ln/=10;
		n_size++;
	}
	res = (char *)malloc((n-size+1)*(char));
	while (ln)
		res = 
}
