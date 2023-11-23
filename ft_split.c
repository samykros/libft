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

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_fill_array(char **aux, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	size_t	s_len;

	i = 0;
	k = 0;
	s_len = ft_strlen(s);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i; // j = start of a substring
		while (s[i] != c && s[i] != '\0')
			i++;
		if (j >= s_len) // String is finished, don't actually get this if
			aux[k++] = "\0";
		else
			aux[k++] = ft_substr(s, j, i - j); // Puts substrs in the array, see the function for better understanding
	}
	return (aux);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	int		nwords;

	if (!s)
		return (NULL);
	nwords = ft_count_words(s, c); // Need it for using malloc
	aux = malloc((nwords + 1) * sizeof(char *)); // Creates the array, you're making space for strings, not caracters
	if (aux == NULL)
		return (NULL);
	aux = ft_fill_array(aux, s, c);
	aux[nwords] = NULL; // Terminate array with NULL
	return (aux);
}

/*
char **ft_split(char const *s, char c);

int main ()
{
    char const *s = "Hola aqui esta";
    char c = ' ';
    char **result = ft_split(s, c);
    int i = 0;

    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        i++;
    }

    i = 0;
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);
    
    return 0;
}
*/
