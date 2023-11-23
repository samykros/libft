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

// In case you forget, size = max amout of char you're gonna copy from src to dest
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	c;

	i = 0;
	j = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size <= i)
		j = j + size;
	else
		j = j + i;
	while ((src[c] != '\0') && (i + 1) < size)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (j);
}

/*
int main ()
{
    char dst[100] = "Hi ";
    const char* src = "mundo";
    size_t len = 2;
    //printf("%lu", strlcat(dst, src, len));
    printf("\n");
    printf("%s", dst);
    printf("\n");
    printf("%lu", ft_strlcat(dst, src, len));
    printf("\n");
    printf("%s", dst);
    return 0;
}
*/
