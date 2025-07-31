/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolonne <acolonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:50:51 by acolonne          #+#    #+#             */
/*   Updated: 2024/11/18 16:56:17 by acolonne         ###   ########.fr       */
/*                                 qq                                         */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp;
	t_list	*save;

	tmp = 0;
	save = 0;
	new_list = 0;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		new_list = ft_lstnew((f)(lst->content));
		if (tmp)
			tmp->next = new_list;
		if (!save)
			save = new_list;
		tmp = lst;
		lst = lst->next;
		del(tmp);
		tmp = new_list;
	}
	return (save);
}
