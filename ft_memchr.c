/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:33:35 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/10 00:44:54 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr (const void *p_mem, int c, size_t length)
{
  const unsigned char *src = (const unsigned char *)p_mem;
  
  while (length-- > 0)
  {
    if (*src == (unsigned char)c)
     return (void *)src;
    src++;
  }
  return NULL;
}