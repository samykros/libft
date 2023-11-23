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

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	temp = (char *)malloc(len * sizeof(char) + 1);
	if (!temp)
		return (NULL);
	while (i < len)
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

/*
ESTO ES VALIDO ? No, apunta a la misma cadena no la duplica

char* my_strdup (const char* original)
{
    return ((char*)original);
}

int main() {
    const char* original = "Hola, mundo!";
    char* duplicate = ft_strdup(original);
    char* duplicate_2 = strdup(original);
    char* duplicate_3 = my_strdup(original);

    if (duplicate != NULL)
    {
        printf("Cadena original: %s\n", original);
        printf("Copia duplicada: %s\n", duplicate);
        printf("Copia duplicada_2: %s\n", duplicate_2);
        printf("Cadena original_3: %s\n", duplicate_3);

        free(duplicate);
    }

    return 0;
}
*/
