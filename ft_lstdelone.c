/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spascual <spascual@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/1 18:49:27 by spascual           #+#    #+#             */
/*   Updated: 2023/10/1 14:11:37 by spascual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content); // Apply the 'del' function to the content of the node
		free(lst);  // Free the memory allocated for the node
	}
}

/*
void del_function(void *content)
{
    free(content);
}

int main(void)
{
    t_list  *element;
    int     *value;

    value = (int*)malloc(sizeof(int));
    if (!value)
        return (1);
    *value = 42;

    element = ft_lstnew(value);
    if (!element)
    {
        free(value);
        return (1);
    }

    printf("Value before deletion: %d\n", *(int*)element->content);
    ft_lstdelone(element, del_function);
    // No intentes acceder a 'element' después de este punto, ya que ha sido liberado.

    return (0);
}
*/
