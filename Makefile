# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 14:33:20 by jaesjeon          #+#    #+#              #
#    Updated: 2022/01/18 19:24:17 by jaesjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I$(HEADERDIR)

NAME = libftprintf.a
LIBFT = libft.a
LIBFTDIR = ./libft

AR = ar
ARFLAGS = -rcus

PRINTFCDIR = ./src_m
PRINTFODIR = ./src_m
PRINTFCDIR_BONUS = ./src_b
PRINTFODIR_BONUS = ./src_b

HEADERDIR = ./header

PRINTFC = ft_printf.c	\
		  cal_len.c
PRINTFC_BONUS = ft_printf_bonus.c		\
				cal_len_bonus.c			\
				make_struct_bonus.c		\
				utils_struct_bonus.c	\
				make_frame_bonus.c		\
				make_num_bonus.c		\
				type_character_bonus.c	\
				type_string_bonus.c		\
				type_pointer_bonus.c	\
				type_numbers_bonus.c

_PRINTFOBJS = $(PRINTFC:.c=.o)
_PRINTFOBJS_BONUS = $(PRINTFC_BONUS:.c=.o)
PRINTFOBJS = $(addprefix $(PRINTFODIR)/, $(_PRINTFOBJS))
PRINTFOBJS_BONUS = $(addprefix $(PRINTFODIR_BONUS)/, $(_PRINTFOBJS_BONUS))

PRINTFHEADER = $(HEADERDIR)/ft_printf.h
PRINTFHEADER_BONUS = $(HEADERDIR)/ft_printf_bonus.h

ifdef WITH_BONUS
	PRINTFCDIR = $(PRINTFCDIR_BONUS)
	PRINTFODIR = $(PRINTFODIR_BONUS)
	PRINTFOBJS = $(PRINTFOBJS_BONUS)
	PRINTFHEADER = $(PRINTFHEADER_BONUS)
endif

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(PRINTFOBJS)
	make bonus -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFT) $@
	$(AR) $(ARFLAGS) $@ $^

$(PRINTFODIR)/%.o: $(PRINTFCDIR)/%.c $(PRINTFHEADER)

clean:
	make clean -C $(LIBFTDIR)
	$(RM) $(PRINTFOBJS) $(PRINTFOBJS_BONUS)

fclean:
	make fclean -C $(LIBFTDIR)
	$(RM) $(PRINTFOBJS) $(PRINTFOBJS_BONUS)
	$(RM) $(NAME)

re: fclean all

bonus:
	@make WITH_BONUS=1 all
