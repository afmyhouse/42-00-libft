/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:34:39 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/10 21:46:43 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc (size_t buff_len, size_t item_size)
{
	void *ptr;

	if (buff_len == 0 || item_size == 0)
    {
		buff_len = 1;
		item_size =1;
	}
	ptr = malloc (buff_len * item_size);
  	if (ptr)
		ft_bzero (ptr, buff_len * item_size);
	return (ptr);
}