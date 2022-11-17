/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:28:11 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/17 13:50:47 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	len;
	char	*p;

	if (!s || !set)
		return (NULL);
	while (ft_strchr(set, *s) && *s)
		s++;
	if (!*s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	while (ft_strchr(set, s[len - 1]))
		len--;
	p = ft_substr(s, 0, len);
	return (p);
}
