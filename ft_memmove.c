/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:50:17 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/09 23:52:39 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char 		*d;
	const char	*s;
 
	d = dest;
	s = src;
	if (len != 0 && d != s )
	{
		if (d < s)
    	{
			while ( len--)
      		*d++ = *s++;
		}
		else if (d > s)
		{
			char *lastd = d + (len-1);
			const char *lasts = s + (len-1);
			while (len--)
				*lastd-- = *lasts--;
		}
	}
	return dest;
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