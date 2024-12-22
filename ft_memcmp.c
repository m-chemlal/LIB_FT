/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <mchemlal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:01:40 by mchemlal          #+#    #+#             */
/*   Updated: 2024/11/16 14:42:26 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(const unsigned char *) s1 != *(const unsigned char *) s2)
			return (*(const unsigned char *) s1 - *(const unsigned char *) s2);
		s1 = (const unsigned char *) s1 + 1;
		s2 = (const unsigned char *) s2 +1;
		n--;
	}
	return (0);
}
