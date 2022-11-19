/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:30:36 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/19 10:56:58 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = dest;
	p_src = (unsigned char *)src;
	if (len != 0 && p_dest != p_src)
	{
		while (len--)
			*p_dest++ = *p_src++;
	}
	return (dest);
}
