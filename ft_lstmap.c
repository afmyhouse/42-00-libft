/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:44:00 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/19 12:50:51 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_lst;
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew(f((*lst).content));
	if (!new_lst)
		return (NULL);
	head_lst = new_lst;
	while (lst)
	{
		if ((*lst).next)
		{
			(*new_lst).next = ft_lstnew(f((*(*lst).next).content));
			if (!(*new_lst).next)
			{
				ft_lstdelone(new_lst, del);
				return (NULL);
			}
			new_lst = (*new_lst).next;
		}
		lst = (*lst).next;
	}
	(*new_lst).next = NULL;
	return (head_lst);
}
