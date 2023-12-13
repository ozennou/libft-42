/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:59:42 by mozennou          #+#    #+#             */
/*   Updated: 2023/11/02 17:18:15 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, unsigned int n)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	if (n > 0)
	{
		while (s[i] != '\0' && i < n - 1)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	return (len);
}
