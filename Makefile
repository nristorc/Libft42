# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nristorc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 09:52:11 by nristorc          #+#    #+#              #
#    Updated: 2019/03/14 14:55:50 by nristorc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMPILATION = gcc -c -Wall -Wextra -Werror

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	   ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
	   ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
	   ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
	   ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_toupper.c ft_tolower.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_putendl_fd.c ft_memalloc.c ft_putchar.c ft_putstr.c ft_putendl.c \
	   ft_putnbr.c ft_strnew.c ft_memdel.c ft_strdel.c ft_strclr.c \
	   ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	   ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
	   ft_itoa.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	   ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_swap.c ft_sqrt.c ft_power.c \
	   ft_strrev.c ft_strcapitalize.c ft_sort_integer_table.c ft_counttab.c \
	   ft_lstcount.c free_map.c ft_lstlast.c \
	   ft_countwords_space.c ft_abs.c ft_tabdel.c ft_strsubdel.c \
	   ft_strjoindel.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMPILATION) $(SRCS) -I .
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
