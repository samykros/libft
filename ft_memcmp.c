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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
int main()
{
    char string_1[] = "Hello, World!";
    char string_2[] = "Hello, ";
    int length = 5;

    // Comparar los primeros 5 caracteres de 'Hello, World!' con 'string_2'
    int result = ft_memcmp(string_2, string_1, length);
    
    if (result == 0)
    {
        printf("The first %d characters are equal.\n", length);
    }
    else
    {
        printf("The first %d characters are not equal.\n", length);
    }

    return 0;
}
*/
