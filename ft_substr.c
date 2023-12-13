/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:56:43 by mozennou          #+#    #+#             */
/*   Updated: 2023/11/02 17:34:35 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t ln)
{
	size_t	n;
	size_t	i;
	char	*res;

	n = 0;
	i = -1;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	while (s[start + n] && n < ln)
		n++;
	res = (char *)malloc(n + 1);
	if (res == NULL)
		return (NULL);
	while (++i < n)
		res[i] = s[start + i];
	res[i] = '\0';
	return (res);
}
