/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <mchemlal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:55:01 by mchemlal          #+#    #+#             */
/*   Updated: 2024/11/16 14:48:32 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	d;

	i = 0;
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	d = len_dst;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (src[i] && (d < dstsize - 1))
	{
		dst[d++] = src[i];
		i++;
	}
	dst[d] = '\0';
	return (len_dst + len_src);
}
