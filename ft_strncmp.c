/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:45:54 by psotto-m          #+#    #+#             */
/*   Updated: 2022/11/21 00:28:56 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t s2_n_chars)
{
	while (s2_n_chars && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--s2_n_chars;
	}
	if (s2_n_chars == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
