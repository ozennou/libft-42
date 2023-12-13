/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:46:39 by mozennou          #+#    #+#             */
/*   Updated: 2023/10/31 08:47:34 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*res;

	if ((int)n < 0 && (int)s < 0)
		return (NULL);
	res = malloc(n * s);
	if (!res)
		return (NULL);
	ft_bzero(res, s * n);
	return (res);
}
