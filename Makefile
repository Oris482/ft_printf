# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 14:33:20 by jaesjeon          #+#    #+#              #
#    Updated: 2022/01/13 17:39:26 by jaesjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.
NAME = libftprintf.a
LIBFT = libft.a
AR = ar
ARFLAGS = -rcus
LIBFTDIR = ./libft
PRINTFCDIR = .
PRINTFODIR = .
PRINTFC = ft_printf.c	\
		  cal_len.c
PRINTFC_BONUS =
_PRINTFOBJS = $(PRINTFC:.c=.o)
_PRINTFOBJS_BONUS = $(PRINTFC:.c=.o)
PRINTFOBJS = $(addprefix $(PRINTFODIR)/, $(_PRINTFOBJS))
PRINTFOBJS_BONUS = $(addprefix $(PRINTFODIR)/, $(_PRINTFOBJS_BONUS))
PRINTFHEADER = $(PRINTFODIR)/ft_printf.h

ifdef WITH_BONUS
	PRINTFOBJS += $(PRINTFOBJS_BONUS)
endif

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(PRINTFOBJS)
	make bonus -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFT) $@
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c $(PRINTFHEADER)

clean:
	make clean -C $(LIBFTDIR)
	$(RM) $(PRINTFOBJS)

fclean:
	make fclean -C $(LIBFTDIR)
	$(RM) $(PRINTFOBJS)
	$(RM) $(NAME)

re: fclean all

bonus:
	@make WITH_BONUS=1 all
