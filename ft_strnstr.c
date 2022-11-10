/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:27:02 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/10 17:34:08 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big_s, const char *little_s, size_t len)
{
	char *p_bs;
	size_t len_l;
	len_l = ft_strlen(little_s);
	p_bs = (char *)big_s;
	if (!*little_s || len == 0)
		return (p_bs);
	if (!*p_bs)
		return (NULL);
	while (*p_bs && (size_t)(p_bs - big_s) < len && (size_t)(p_bs - big_s) <= (ft_strlen(p_bs) - len_l))
	{
		if (!ft_strncmp(p_bs, little_s, len_l))
			return (p_bs);
		p_bs++;
	}
	return (NULL);
}
