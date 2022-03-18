/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praunkae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:27:59 by praunkae          #+#    #+#             */
/*   Updated: 2022/03/17 22:51:50 by praunkae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	*new;
	t_list	*lst2;

	lst2 = ft_lstnew((*f)(lst->content));
	if (lst2 == 0)
		return (0);
	ptr2 = lst2;
	ptr = lst->next;
	while (ptr != NULL)
	{
		new = ft_lstnew((*f)(ptr->content));
		if (new == 0)
		{
			ft_lstclear(&lst2, del);
			return (0);
		}
		ptr2->next = new;
		ptr = ptr->next;
		ptr2 = new;
	}
	return (lst2);
}
