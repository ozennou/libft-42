/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:30:31 by mozennou          #+#    #+#             */
/*   Updated: 2023/10/31 10:03:45 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*pp;

	if (!s && !d)
		return (NULL);
	i = 0;
	p = (unsigned char *)d;
	pp = (unsigned char *)s;
	while (i < n)
	{
		p[i] = pp[i];
		i++;
	}
	return (d);
}
/*#include<stdio.h>
int main()
{
	char s[50] = "Hello my name is amine";
	char o[20];
	ft_memcpy(o,s,10);
	o[10] = 0;
	printf("%s\n",o);
}*/
