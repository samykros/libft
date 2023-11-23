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

// Void as parameters to be more flexible, still weird to understand
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
int main()
{
    char source[] = "Hello, World!";
    char destination[20];
    int length = 5;

    // Copia los primeros 5 caracteres de 'Hello, World!' en 'destination'
    ft_memcpy(destination, source, length);
    destination[length] = '\0'; // Termina la cadena
    printf("Copied string: %s\n", destination);

    return 0;
}
*/
