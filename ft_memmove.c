/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:50:17 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/19 11:45:43 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (length != 0 && p_dest != p_src)
	{
		if (p_dest < p_src)
		{
			while (length--)
			*p_dest++ = *p_src++;
		}
		else if (p_dest > p_src)
		{
			p_dest = (unsigned char *)dest + (length -1);
			p_src = (unsigned char *)src + (length -1);
			while (length--)
				*p_dest-- = *p_src--;
		}
	}
	return (dest);
}
