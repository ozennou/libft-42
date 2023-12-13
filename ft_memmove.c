/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:41:59 by mozennou          #+#    #+#             */
/*   Updated: 2023/10/31 10:13:50 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	if (!s && !d)
		return (NULL);
	ds = (char *)d;
	sr = (char *)s;
	if (d > s)
	{
		while (n-- > 0)
			ds[n] = sr[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			ds[i] = sr[i];
	}
	return (d);
}
/*#include<stdio.h>
int main()
{
	char s[50] = "Hello my name is amine";
	char o[20];
	ft_memmove(o,s,10);
	o[10] = 0;
	printf("%s\n",o);
}*/
