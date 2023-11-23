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

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len <= 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < len - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	while (src[i])
		i++;
	dst[j] = '\0';
	return (i);
}

/*
int main ()
{
    char dst[10];
    const char* src = "aaa";
    size_t len = 1;
    printf("%lu", strlcpy(dst, src, len));
    printf("\n");
    printf("%s", dst);
    printf("\n");
    printf("%lu", ft_strlcpy(dst, src, len));
    printf("\n");
    printf("%s", dst);
    return 0;
}
*/
