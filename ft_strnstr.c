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

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return ((char *)&str[0]);
	while (i < len && str[i])
	{
		while (str[i + j] == to_find[j] && to_find[j] && i + j < len)
		{
			j++;
		}
		if (to_find[j] == 0)
			return ((char *)&str[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}

/*
int main ()
{
    const char *str = "Hola, busco la";
    const char *to_find = "usc";
    size_t len = 40;

    printf("%s", ft_strnstr(str, to_find, len));
    printf("\n");
    printf("%s", strnstr(str, to_find, len));
    return 0;
}
*/
