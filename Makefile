# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 14:33:20 by jaesjeon          #+#    #+#              #
#    Updated: 2022/01/04 19:59:00 by jaesjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.
NAME = libftprintf.a
AR = ar
ARFLAGS = -rcus
LIBFTCDIR = ./libft
LIBFTODIR = ./libft
PRINTFCDIR = .
PRINTFODIR = .
LIBFTC = ft_memset.c	\
		ft_bzero.c	\
		ft_memcpy.c	\
		ft_memmove.c	\
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_strlen.c	\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c	\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_atoi.c	\
		ft_calloc.c	\
		ft_strdup.c	\
		ft_substr.c	\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c	\
		ft_itoa.c	\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putvnbr_fd.c	\
		ft_lstnew.c	\
		ft_lstadd_front.c	\
		ft_lstsize.c	\
		ft_lstlast.c	\
		ft_lstadd_back.c	\
		ft_lstdelone.c	\
		ft_lstclear.c	\
		ft_lstiter.c	\
		ft_lstmap.c
PRINTFC = ft_printf.c	\
		  cal_len.c
_LIBFTOBJS = $(LIBFTC:.c=.o)
_PRINTFOBJS = $(PRINTFC:.c=.o)
LIBFTOBJS = $(addprefix $(LIBFTODIR)/, $(_LIBFTOBJS))
PRINTFOBJS = $(addprefix $(PRINTFODIR)/, $(_PRINTFOBJS))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIBFTOBJS) $(PRINTFOBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c libft.h ft_printf.h

clean:
	$(RM) $(LIBFTOBJS) $(PRINTFOBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) libft.a

re: fclean all

