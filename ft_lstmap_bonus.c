/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:50:14 by mozennou          #+#    #+#             */
/*   Updated: 2023/11/04 10:18:38 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*p;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	p = NULL;
	while (lst)
	{
		p = ft_lstnew(NULL);
		if (!p)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		p->content = f(lst->content);
		ft_lstadd_back(&res, p);
		lst = lst->next;
	}
	return (res);
}
