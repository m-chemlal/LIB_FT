/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <mchemlal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:01:39 by mchemlal          #+#    #+#             */
/*   Updated: 2024/11/16 16:09:42 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len_lst;

	if (!lst)
		return (0);
	len_lst = 0;
	while (lst)
	{
		lst = lst -> next;
		len_lst++;
	}
	return (len_lst);
}
