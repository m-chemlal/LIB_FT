/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <mchemlal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:22:43 by mchemlal          #+#    #+#             */
/*   Updated: 2024/11/16 15:33:07 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			size;
	char			*ptr;

	i = 0;
	if (!s || !f)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	size = ft_strlen(s);
	while (i < size)
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr [i] = '\0';
	return (ptr);
}
