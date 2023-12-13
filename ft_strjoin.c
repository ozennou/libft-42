/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:59:08 by mozennou          #+#    #+#             */
/*   Updated: 2023/11/02 17:36:19 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *a, char const *b)
{
	int		i;
	int		a_ln;
	int		b_ln;
	char	*res;

	if (!a || !b)
		return (NULL);
	a_ln = ft_strlen((char *)a);
	b_ln = ft_strlen((char *)b);
	res = (char *)malloc(a_ln + b_ln + 1);
	if (!res)
		return (res);
	i = -1;
	while (++i < a_ln)
		res[i] = a[i];
	i = -1;
	while (++i < b_ln)
		res[a_ln + i] = b[i];
	res[a_ln + i] = '\0';
	return (res);
}
