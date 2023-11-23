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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	if (!s)
		return (NULL);
	result = (char *)malloc(len * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]); // easier to understand f(1, s[i])
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
char function(unsigned int n, char c) // n = i c = s[i]
{
    return c + n;
}

int main()
{
    const char *s = "abcdefghijklm";
    char *result = ft_strmapi(s, function);
    printf("%s\n", result);
    free(result);
    return 0;
}
*/
