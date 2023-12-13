/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:29:10 by mozennou          #+#    #+#             */
/*   Updated: 2023/10/31 13:56:51 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	ft_memcmp(const void *a, const void *b, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*pp;

	p = (unsigned char *)a;
	pp = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		if (p[i] != pp[i])
			return (p[i] - pp[i]);
		i++;
	}
	return (0);
}
