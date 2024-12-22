/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <mchemlal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:22:21 by mchemlal          #+#    #+#             */
/*   Updated: 2024/11/16 15:30:17 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int n)
{
	size_t	count;

	count = 1;
	if (n < 0)
		count++;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_number(char *ptr, size_t len, long num)
{
	ptr[len--] = '\0';
	if (num == 0)
		ptr[0] = '0';
	if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	while (num)
	{
		ptr[len--] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ptr;
	long	num;

	len = int_len(n);
	num = (long)n;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	fill_number(ptr, len, num);
	return (ptr);
}
