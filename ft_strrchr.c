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

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	char_c;

	i = 0;
	char_c = (char)c;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == char_c)
			return ((char *) &str[i]);
		i--;
	}
	if (char_c == '\0')
		return ((char *) &str[i]);
	return (NULL);
}

/*
int main ()
{
    printf("%s", strrchr("holaoee", 'o'));
    printf("\n");
    printf("%s", ft_strrchr("holaoee", 'o'));
    return 0;
}
*/
