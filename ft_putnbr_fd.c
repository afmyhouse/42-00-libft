/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:53:08 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/17 15:05:25 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int	temp_n;

	temp_n = nb;
	if (temp_n < 0)
	{
		write(fd, "-", 1);
		temp_n = temp_n * -1;
	}
	if (temp_n > 9)
	{
		ft_putnbr_fd(temp_n / 10, fd);
		ft_putnbr_fd(temp_n % 10, fd);
	}
	else
	{
		temp_n = temp_n + '0';
		write(fd, &temp_n, 1);
	}
}
