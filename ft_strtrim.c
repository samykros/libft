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

/*
const char *var; declara un puntero a un carácter constante. 
No puedes modificar el contenido del puntero (el carácter al que apunta), 
pero puedes cambiar el puntero en sí mismo para que apunte a otro lugar.
char const *var; es equivalente a const char *var;.
char *const var; declara un puntero constante a un carácter. 
Puedes cambiar el carácter al que apunta el puntero, 
pero no puedes cambiar el puntero en sí mismo para que apunte a otro lugar.
????????
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start])) // Increment start to skip char we don't want
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1])) // Like start but backwards, -1 because \0
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

/*
int main ()
{
    char const *s1 = "Holila munlado"; // hay diferencia entre const char y char const?
    char const *set = "la";

    printf("%s", ft_strtrim(s1, set));
    return 0;
}
*/
