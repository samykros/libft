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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	res = new;
	lst = lst->next;
	new = new->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
		new = new->next;
	}
	return (res);
}

/*
// Función que simula la función 'f' que se pasa a ft_lstmap
void	*my_function(void *content)
{
	// Esta función simplemente duplica el contenido como ejemplo
	char	*str = (char *)content;
	char	*new_str = strdup(str);
	return ((void *)new_str);
}

// Función que simula la función 'del' que se pasa a ft_lstmap
void	my_del(void *content)
{
	// Esta función libera la memoria del contenido (asumiendo que es una cadena)
	free(content);
}

// Función principal
int main(void)
{
	// Crear una lista enlazada simple
	t_list *lst = ft_lstnew("Hello");
	lst->next = ft_lstnew("World");
	lst->next->next = ft_lstnew("!");

	// Aplicar ft_lstmap para duplicar los contenidos de la lista
	t_list *new_list = ft_lstmap(lst, my_function, my_del);

	// Imprimir la lista duplicada
	t_list *current = new_list;
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf("\n");

	// Liberar la memoria de la lista duplicada
	while (new_list)
	{
		t_list *temp = new_list;
		new_list = new_list->next;
		my_del(temp->content);
		free(temp);
	}

	return (0);
}
*/
