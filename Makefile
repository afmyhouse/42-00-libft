# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 11:20:00 by antoda-s          #+#    #+#              #
#    Updated: 2022/11/11 23:25:59 by antoda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
					ft_toupper.c ft_tolower.c ft_atoi.c \
					ft_strdup.c ft_strlen.c ft_strlcat.c ft_strchr.c ft_strnstr.c \
					ft_strncmp.c ft_strlcpy.c ft_strrchr.c \
					ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
					ft_calloc.c ft_substr.c \
					#ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
					ft_split.c \
					ft_itoa.c ft_strncmp.c \
					ft_putnbr_fd.c \
					ft_strjoin.c ft_strtrim.c ft_striteri.c
OBJS			= $(SRCS:.c=.o)
				
BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c
BONUS_OBJS		= $(BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus

so:
				$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
				gcc -nostartfiles -shared -o libft.so $(OBJS)
