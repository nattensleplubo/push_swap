NAME		=	push_swap

SRCS		=	push_swap.c check_args.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -I.

all:		make -C ./libft/ bonus
			make -C ./libft/ft_printf/
			$(NAME)

$(NAME):	$(OBJS) $(HEAD)
			ar rcs $(NAME) $(OBJS)

clean:
			make -C ./libft/ fclean
			make -C ./libft/ft_printf/ fclean
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)