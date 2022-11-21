/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:30:36 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/21 23:33:07 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t width)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = dest;
	p_src = (unsigned char *)src;
	if (width != 0 && p_dest != p_src)
	{
		while (width--)
			*p_dest++ = *p_src++;
	}
	return (dest);
}
