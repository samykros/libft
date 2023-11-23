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

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		uc;
	size_t				i;

	src = s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == uc)
			return ((void *)(src + i));
		i++;
	}
	return (NULL);
}

/*
int main ()
{
    char str[] = "Hello, World!";
    char ch = 'W';
    size_t len = sizeof(str);

    // Buscar el carácter 'W' en la cadena
    void *result = ft_memchr(str, ch, len);

    if (result != NULL)
    {
        // Calcular la posición del carácter 'W' en la cadena
        size_t position = (size_t)((char *)result - str);

        printf("El carácter '%c' se encontró en la posición %zu.\n", ch, position);
    }
    else
    {
        printf("El carácter '%c' no se encontró en la cadena.\n", ch);
    }

    return 0;
}
*/
