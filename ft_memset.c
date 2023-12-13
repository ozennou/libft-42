/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:10:30 by mozennou          #+#    #+#             */
/*   Updated: 2023/10/30 12:17:27 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i++] = (unsigned char)c;
	}
	return (s);
}
/*#include<stdio.h>
int main()
{
	char *s;
	s = malloc(21);
	ft_memset((void *)s,'5',20);
	s[21] = '\0';
	printf("%s\n",s);
}*/
