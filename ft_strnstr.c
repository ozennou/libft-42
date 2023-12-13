/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:30:48 by mozennou          #+#    #+#             */
/*   Updated: 2023/11/02 19:54:54 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *a, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s && !n)
		return (NULL);
	if (a[0] == '\0')
		return ((char *)s);
	while (s[i] && i < n)
	{
		if (s[i] == a[0])
		{
			j = 0;
			while (s[i + j] == a[j] && a[j] && s[i + j] && (i + j) < n)
				j++;
			if (a[j] == '\0')
				return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
