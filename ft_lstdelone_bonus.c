/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:01:20 by mozennou          #+#    #+#             */
/*   Updated: 2023/11/04 09:58:32 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		(*del)(lst->content);
		free(lst);
	}
}
/*void del(void *d)
{
	if(d)
	{
		int *p = (int *)d;
		*p = 0;
	}
	    
}
#include <stdio.h>
int main()
{
	int ll = 9;
	t_list *l=ft_lstnew((void *)&ll);
	printf("%d\n",*(int *)(l->content));
	ft_lstdelone(l,del);
	printf("%d\n",*(int *)(l->content));
}*/