/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:37:32 by mozennou          #+#    #+#             */
/*   Updated: 2023/11/02 17:19:24 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, unsigned int n)
{
	unsigned int	d_ln;
	unsigned int	s_ln;
	unsigned int	i;

	if (!d && !n)
		return (0);
	i = 0;
	d_ln = ft_strlen(d);
	s_ln = ft_strlen(s);
	if (d_ln >= n)
		return (n + s_ln);
	if (d_ln < n - 1)
	{
		while (s[i] && i + d_ln < n - 1)
		{
			d[d_ln + i] = s[i];
			i++;
		}
		d[d_ln + i] = '\0'; 
	}
	return (d_ln + s_ln);
}
