/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamadou <idamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 04:34:15 by idamadou          #+#    #+#             */
/*   Updated: 2025/11/08 20:29:04 by idamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*function(void *content)
{
	char	*new_content;
	size_t	i;

	if (!content)
		return (NULL);
	i = 0;
	new_content = ft_strdup((char *)content);
	if (!new_content)
		return (NULL);
	while (new_content[i])
	{
		if (new_content[i] >= 'a' && new_content[i] <= 'z')
			new_content[i] -= 32;
		i++;
	}
	return (new_content);
}

void	delete_needed(void *content)
{
	free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (ft_lstclear(&new_lst, del), NULL);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			return (ft_lstclear(&new_lst, del), NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
