/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:50:17 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/21 23:33:27 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t width)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (width != 0 && p_dest != p_src)
	{
		if (p_dest < p_src)
		{
			while (width--)
			*p_dest++ = *p_src++;
		}
		else if (p_dest > p_src)
		{
			p_dest = (unsigned char *)dest + (width -1);
			p_src = (unsigned char *)src + (width -1);
			while (width--)
				*p_dest-- = *p_src--;
		}
	}
	return (dest);
}
