# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 12:49:43 by antoda-s          #+#    #+#              #
#    Updated: 2022/11/04 12:49:43 by antoda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

PRE = ./src/

CODEDIRS = ft_is ft_mem ft_put ft_str ft_to

BONUSDIR = ft_lst

SRCS = ${addprefix ${PRE}, ${CODEDIRS}}

SRCS_BONUS = ${addprefix ${PRE}, ${BONUSDIR}}

CFILES = $(foreach D,$(SRCS),$(wildcard $(D)/*.c))

BFILES = $(foreach D,$(SRCS_BONUS),$(wildcard $(D)/*.c))

OBJS = ${CFILES:.c=.o}

OBJS_B = ${BFILES:.c=.o}

HEADER = ./include/

CC = cc

CFLAGS = -Wall -Wextra -Werror -I ${HEADER}

#com automatização
#CFLAGS = -Wall -Wextra -Werror $(foreach D,$(HEADER), -I$(D))

AR = ar -rc

RM = rm -rf

LIB = ranlib

all: ${NAME}

${NAME}: ${OBJS}
	${AR} $@ $^
	${LIB} ${NAME}

%.o:%.c
	${CC} ${CFLAGS} -c -o $@ $<

bonus: ${OBJS} ${OBJS_B}
	${AR} ${NAME} $^
	${LIB} ${NAME}

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus