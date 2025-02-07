# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rperello <rperello@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 18:20:37 by rperello          #+#    #+#              #
#    Updated: 2025/01/20 21:24:32 by rperello         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

MY_SOURCES =	ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_tolower.c\
				ft_toupper.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\

OBJS = $(MY_SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): Makefile libft.h $(OBJS)
	@ar crs $(NAME) $(OBJS)
	@echo "Library $(NAME) created succesfully."

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJS)
	@echo "Object files removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "Library $(NAME) removed."

re:	fclean all

.PHONY: all clean fclean re

