/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:32:46 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/25 12:59:51 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_element;
	t_list	*n_list;

	if (!lst || !f)
		return (NULL);
	n_list = 0;
	while (lst)
	{
		n_element = ft_lstnew((*f)(lst->content));
		if (!n_element)
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_element);
		lst = lst->next;
	}
	return (n_list);
}
