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

// Used to inicialize memorie, delete sensitive date (passwords)...
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p; // Can't operate with void need unsigned char
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
int main ()
{
    char buffer[20];
    
    // Inicializar el buffer con algún valor diferente de cero
    memset(buffer, 'X', sizeof(buffer));
    ft_bzero(buffer, sizeof(buffer));
    // bzero(buffer, sizeof(buffer)); // Puedes comprobar con el original
    printf("Buffer: %s\n", buffer);

    return 0;
}
*/
