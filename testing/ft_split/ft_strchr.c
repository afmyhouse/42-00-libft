/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:27:02 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/14 21:08:29 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchrpos(const char *s, int c)
{
	int pos;

	pos = 0;
	if (!c)
		return (f_strlen(s) +1);
	if (!s)
		return (NULL);	
	while (s[pos])
	{
		if (s[pos] == c)
			return (pos);
		pos++;
	}
	return (pos);
}
