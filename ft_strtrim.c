/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:03:57 by mozennou          #+#    #+#             */
/*   Updated: 2023/11/02 17:37:24 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	there(char c, char const *set)
{
	while (*set)
	{
		if ((*set) == c)
			return (1);
		set++;
	}
	return (0);
}

static int	trimlen(char const *s, char const *set)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s);
	while (s[i] && there(s[i], set))
	{
		i++;
		len--;
	}
	if (s[i])
	{
		i = ft_strlen(s) - 1;
		while (there(s[i], set))
		{
			i--;
			len--;
		}
	}
	return (len);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*res;
	int		i;
	int		k;

	if (!s || !set)
		return (NULL);
	res = (char *)malloc(trimlen(s, set) + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] && there(s[i], set))
		i++;
	while (k < trimlen(s, set))
	{
		res[k] = s[i + k];
		k++;
	}
	res[k] = '\0';
	return (res);
}
