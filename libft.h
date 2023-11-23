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

#ifndef LIBFT_H

# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

/* Implementation of linked list */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;


/* Verifica si el carácter es una letra del alfabeto */
int		ft_isalpha(int s);

/* Verifica si el carácter es un dígito */
int		ft_isdigit(int s);

/* Verifica si el carácter es alfanumérico (letra o dígito) */
int		ft_isalnum(int s);


/* Verifica si el valor se encuentra en el rango ASCII */
int		ft_isascii(int s);

/* Verifica si el carácter es un carácter imprimible */
int		ft_isprint(int s);

/* Calcula la longitud de una cadena de caracteres */
int		ft_strlen(char const *s);

/* Llena una región de memoria con un valor específico, 0, A... */
void	*ft_memset(void *s, int c, size_t n);

/* Establece a cero (0) una región de memoria */
void	ft_bzero(void *s, size_t n);

/* Copia una región de memoria a otra, bytes, similar a strcpy */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/* Copia una región de memoria a otra, incluso si las regiones se superponen, piensa que estas moviendo cadenas de posicion, no copiando */
void	*ft_memmove(void *dest, const void *source, size_t n);

/* Copia una cadena a otra con un límite de tamaño */
size_t	ft_strlcpy(char *dst, const char *src, size_t len);

/* Concatena dos cadenas con un límite de tamaño */
size_t	ft_strlcat(char *dest, char *src, size_t size);

/* Convierte un carácter en mayúscula */
int		ft_toupper(int c);

/* Convierte un carácter en minúscula */
int		ft_tolower(int c);

/* Encuentra la primera aparición de un carácter en una cadena */
char	*ft_strchr(const char *str, int c);

/* Encuentra la última aparición de un carácter en una cadena */
char	*ft_strrchr(const char *str, int c);

/* Compara dos cadenas hasta el n-ésimo carácter */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* Busca un carácter en una región de memoria */
void	*ft_memchr(const void *s, int c, size_t n);

/* Compara dos regiones de memoria */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* Busca una subcadena en una cadena con un límite de longitud */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/* Convierte una cadena de caracteres en un entero */
int		ft_atoi(char *str);

/* Asigna memoria para un número de elementos con un tamaño específico, y la inicializa a cero */
void	*ft_calloc(size_t nmemb, size_t size);

/* Duplica una cadena de caracteres */
char	*ft_strdup(char *src);

/* Extrae una subcadena de una cadena dada, comenzando en una posición y con una longitud específica */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* Concatena dos cadenas de caracteres */
char	*ft_strjoin(char const *s1, char const *s2);

/* Elimina los caracteres de s (" =Ho=la-") que aparecen en set (" =-") result ("Ho=la") al principio y final */
char	*ft_strtrim(char const *s, char const *set);

/* Divide una cadena en fragmentos utilizando un carácter delimitador */
char	**ft_split(char const *s, char c);

/* Convierte un entero en una cadena de caracteres */
char	*ft_itoa(int n);

/* Aplica una función a cada carácter de una cadena y crea una nueva cadena con los resultados */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* Aplica una función a cada carácter de una cadena con su índice */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Escribe un carácter en un descriptor de archivo */
void	ft_putchar_fd(char c, int fd);

/* Escribe una cadena en un descriptor de archivo */
void	ft_putstr_fd(char *s, int fd);

/* Escribe una cadena seguida de un salto de línea en un descriptor de archivo */
void	ft_putendl_fd(char *s, int fd);

/* Escribe un entero en un descriptor de archivo */
void	ft_putnbr_fd(int n, int fd);

/* Crea un nuevo nodo de lista con el contenido especificado */
t_list	*ft_lstnew(void *content);

/* Agrega un nodo al frente de una lista */
void	ft_lstadd_front(t_list **lst, t_list *new);

/* Obtiene el tamaño de una lista */
int		ft_lstsize(t_list *lst);

/* Obtiene el último nodo de una lista */
t_list	*ft_lstlast(t_list *lst);

/* Agrega un nodo al final de una lista */
void	ft_lstadd_back(t_list **lst, t_list *new);

/* Elimina un nodo de una lista con una función de eliminación personalizada */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/* Elimina todos los nodos de una lista con una función de eliminación personalizada */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/* Aplica una función a cada nodo de una lista */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/* Crea una nueva lista aplicando una función a cada nodo de una lista original */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
