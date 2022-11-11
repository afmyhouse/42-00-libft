/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:24:38 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/10 21:33:11 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	char	*p_s;

	p_s = (char *)s;
	while (*p_s)
	{
		p_s++;
	}
	while (p_s >= s)
	{
		if (*p_s == (unsigned char)ch)
			return (p_s);
		p_s--;
	}
	return (NULL);
}
