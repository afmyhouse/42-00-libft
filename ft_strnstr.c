/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:27:02 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/21 00:20:31 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *ns, size_t limit)
{
	char	*phs;
	size_t	lns;

	lns = ft_strlen(ns);
	phs = (char *)hs;
	if (!*ns)
		return (phs);
	if (limit == 0 || !*phs)
		return (NULL);
	if (limit > ft_strlen(hs))
		limit = ft_strlen(hs);
	while (*phs && (size_t)(phs - hs + lns) <= limit)
	{
		if (!ft_strncmp(phs, ns, lns))
			return (phs);
		phs++;
	}
	return (NULL);
}
/*
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
*/
