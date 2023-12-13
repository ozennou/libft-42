/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:53:28 by mozennou          #+#    #+#             */
/*   Updated: 2023/10/31 08:54:02 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		len;
	int		i;

	i = -1;
	len = ft_strlen((char *)s);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	while (++i < len)
		res[i] = s[i];
	res[i] = '\0';
	return (res);
}
