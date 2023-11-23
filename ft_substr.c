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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlen;
	size_t	size;
	size_t	i;
	char	*ptr;

	strlen = ft_strlen(s);
	i = 0;
	if (start >= strlen || s[0] == '\0')
		size = 0;
	else
		size = strlen - start;
	if (len >= size)
		ptr = (char *)malloc((size + 1) * sizeof(char));
	else
		ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < size && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
int main ()
{
    char const *s = "Hola caracola";
    printf("%s", ft_substr(s, 4, 2)); // 3-7 a carac , 2-2 la, 4-2  c, 9-6 cola
    // free?, todo funciona, chatgpt dice que tengo fuga de memoria, solucionar eso
    // char* substring = ft_substr(s, 4, 2);
    // printf("%s\n", substring);
    // free(substring);
    // printf usa malloc, significa eso que tambien hace un free? entonces no pierdo memoria y no necesito hacer un free yo?
    return 0;
}
*/
