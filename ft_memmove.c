/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <mchemlal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:53:41 by mchemlal          #+#    #+#             */
/*   Updated: 2024/11/16 14:41:30 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*q;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	i = 0;
	if (p > q)
	{
		while (len--)
		{
			p[len] = q[len];
		}
	}
	else
	{
		while (i++ < len)
		{
			*(p++) = *(q++);
		}
	}
	return (dst);
}
