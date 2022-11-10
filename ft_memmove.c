/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:50:17 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/10 10:47:02 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*p_dest;
	const char	*p_src;
	char		*p_dest_end;
	const char	*p_src_end;

	p_dest = dest;
	p_src = src;
	p_dest_end = dest + (len - 1);
	p_src_end = src + (len - 1);
	if (len != 0 && p_dest != p_src)
	{
		if (p_dest < p_src)
		{
			while (len--)
			*p_dest++ = *p_src++;
		}
		else if (p_dest > p_src)
		{
			while (len--)
				*p_dest_end-- = *p_src_end--;
		}
	}
	return (dest);
}

/*void *memmove(void *dest, const void *src, size_t len)
{
  unsigned char *d;
  const unsigned char *s;

  d = dest;
  s = src;
  if (d < s)
    while (len--)
      *d++ = *s++;
  else
    {
      s = s + (len-1);
      d = d + (len-1);
      while (len--)
        *d-- = *s--;
    }
  return dest;
}*/