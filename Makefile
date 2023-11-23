# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   main.c                                             :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: spascual <spascual@student.42berlin.de>    +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/10/1 18:49:27 by spascual           #+#    #+#             #
#   Updated: 2023/10/1 14:11:37 by spascual          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror


SRC = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_lstnew.c \

B_SRC =	ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \


OBJ = $(SRC:.c=.o) # Para crear los .o files
B_OBJ = $(B_SRC:.c=_bonus.o)

# Lo que hay abajo ~
all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) # Static library (libft.a) Dinamic libraries (libft.so)
	ranlib $(NAME) # For static libraries, better optimization, not necessary

%.o: %.c
	cc $(FLAGS) -I . -c $< -o $@ # I don't get -I . -c $< -o $@

bonus: $(B_OBJ)
	ar rc $(NAME) $(B_OBJ)
	ranlib $(NAME)

%_bonus.o: %.c
	cc $(FLAGS) -I . -c $< -o $@

# Delete .o files (make clean)
clean:
	rm -f $(OBJ) $(B_OBJ)

# Delete .o files and .a
fclean: clean
	rm -f $(NAME)

re: fclean all

# Backup if there are files with the rules names (all, clean...)
.PHONY: all bonus clean fclean re
