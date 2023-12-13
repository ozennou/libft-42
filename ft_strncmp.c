/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:51:34 by mozennou          #+#    #+#             */
/*   Updated: 2023/10/30 20:53:54 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*pp;

	i = 0;
	p = (unsigned char *)a;
	pp = (unsigned char *)b;
	while (i < n && (p[i] || pp[i]))
	{
		if (p[i] != pp[i])
			return (p[i] - pp[i]);
		i++;
	}
	return (0);
}
