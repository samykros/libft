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

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
int main ()
{
    char buffer[20];
    char buffer_2[20];

    // Llenar el bloque de memoria con 'A' utilizando ft_memset
    ft_memset(buffer, 'A', sizeof(buffer));
    buffer[sizeof(buffer) - 1] = '\0'; // Agregar manualmente el carácter nulo al final
    memset(buffer_2, 'A', sizeof(buffer_2));
    printf("Buffer  : %s\n", buffer);
    printf("Buffer_2: %s\n", buffer_2);

    return 0;
}
*/
