NAME		=	push_swap

SRCS		=	check_argc.c

CC			=	gcc
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -I.

LIB_PATH = ./libft/libft.a ./libft/ft_printf/libftprintf.a

%.o: %.c
			$(CC) $(CFLAGS) 

OBJS		=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	
		make -C libft/ bonus
		make -C libft/ft_printf/
		$(CC) $(CFLAGS) $(SRCS) $(LIB_PATH) -o $(NAME)

clean:
			make -C libft/ fclean
			make -C libft/ft_printf/ fclean
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)
