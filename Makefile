NAME		=	push_swap

SRCS		=	check_argc.c ft_init_a.c ft_sort_low_utils.c ft_sort_low.c \
				push_swap.c push.c radix.c rev_rotate.c rotate.c swap.c utils.c
OBJS		=	$(SRCS:.c=.o);

CC			=	gcc
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -I.

LIB_PATH = ./libft/libft.a

all:		$(NAME)

$(NAME): $(OBJS)
		make -C libft/ bonus
		$(CC) $(CFLAGS) $(SRCS) $(LIB_PATH) -o $(NAME)

clean:
			make -C libft/ clean
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			make -C libft/ fclean

re:			fclean $(NAME)
