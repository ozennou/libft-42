/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozennou <mozennou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:46:26 by mozennou          #+#    #+#             */
/*   Updated: 2023/11/04 18:22:26 by mozennou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	ln;
	int	i;

	if (!s || !f)
		return ;
	ln = ft_strlen(s);
	i = -1;
	while (++i < ln)
		(*f)(i, s + i);
}
/*
void f(unsigned int i, char *s)
{
	*s = *s - 32;
}
int main(int argc, char **argv) 
{
	char s[] = "hello";
    ft_striteri(s,f);
	printf("%s",s);
    
    return 0;
}*/
