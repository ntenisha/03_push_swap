HEADER			=	includes/push_swap.h

NAME			=	push_swap

MAIN			=	push_swap.c

SRCS			=	srcs/utils/ft_atoi2.c\
					srcs/utils/ft_split.c\
					srcs/utils/ft_split_utils.c\
					srcs/utils/ps_utils_02.c\
					srcs/utils/ps_utils_01.c\
					srcs/utils/array.c\
					srcs/utils/spisok.c\
					srcs/stack_oper/push_stack.c\
					srcs/stack_oper/rotate_stack.c\
					srcs/stack_oper/swap_stack.c\
					srcs/sort/sort.c\
					srcs/sort/sort_max.c\
					srcs/sort/sort_max_help.c\
					srcs/sort/sort_push.c

OBJS			=	$(SRCS:.c=.o)\
					$(MAIN:.c=.o)

HEADER_BONUS	=	includes/checker.h

NAME_BONUS		=	checker

MAIN_BONUS		=	checker.c

SRCS_BONUS		=	srcs/checker/checker_push_stack.c\
					srcs/checker/checker_rotate_stack.c\
					srcs/checker/checker_swap_stack.c\
					srcs/checker/checker_ft_strcpy.c\
					srcs/checker/checker_ft_strnjoin.c\
					srcs/utils/ps_utils_01.c\
					srcs/utils/ps_utils_02.c\
					srcs/utils/ft_atoi2.c\
					srcs/utils/ft_split.c\
					srcs/utils/ft_split_utils.c\
					srcs/utils/array.c\
					srcs/utils/spisok.c\

OBJS_BONUS		=	$(SRCS_BONUS:.c=.o)\
					$(MAIN_BONUS:.c=.o)

LIBFT			=	./Libft

LIB				=	./Libft/libft.a

CC				=	cc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -f

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):		$(OBJS) $(HEADER) $(LIB)
				$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

bonus:			$(OBJS_BONUS) $(HEADER_BONUS) $(LIB)
				$(CC) $(CFLAGS) $(OBJS_BONUS) $(LIB) -o $(NAME_BONUS)

all:			$(NAME)

$(LIB):
				make bonus -C $(LIBFT)

clean:
				$(RM) $(OBJS) $(OBJS_BONUS)
				make clean -C Libft

fclean:			clean
				$(RM) $(NAME) $(NAME_BONUS)
				make fclean -C Libft

re:				fclean all

.PHONY:			all bonus clean fclean re