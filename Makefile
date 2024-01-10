# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 17:46:25 by deryacar          #+#    #+#              #
#    Updated: 2023/12/04 14:01:50 by deryacar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS_NAME = checker
LIBFT = libft
LIBFTM = libft/libft.a
CC = gcc -g
CFLAGS = -Wall -Wextra -Werror
CFILES = 	ps_utils.c \
	sort_function.c \
	small_sort_func.c \
	sort.c \
	transactions_a.c \
	transactions_b.c \
	transactions_ab.c \
	quick_sort.c \
	free_error.c \
	get_next_line.c \
	push_swap.c \

CFILES_BONUS = 	ps_utils.c \
	sort_function.c \
	small_sort_func.c \
	sort.c \
	transactions_a.c \
	transactions_b.c \
	transactions_ab.c \
	quick_sort.c \
	free_error.c \
	get_next_line.c \

BONUS_FILES = checker.c $(CFILES_BONUS)
OBJS = $(CFILES:.c=.o)
BONUS_OBJS = $(BONUS_FILES:.c=.o)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFTM) -o $(NAME)
	@echo "\n\033[1;32mPush_swap is ready ✅\033[0m\n"

all: $(NAME)
	@echo "\n\033[1;32mAll files compiled successfully ✅\033[0m\n"

bonus: $(BONUS_OBJS) 
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) $(BONUS_OBJS) $(LIBFTM) -o $(BONUS_NAME)
	@echo "\n\033[1;32mBonus files compiled successfully ✅\033[0m\n"

clean: pic
		@make clean -C $(LIBFT)
		@rm -f $(OBJS) $(BONUS_OBJS)
		@echo "\n\033[1;32mObjects files deleted ✅\033[0m\n"

fclean: clean
		@make fclean -C $(LIBFT)
		@rm -rf $(NAME) $(BONUS_NAME)
		@echo "\n\033[1;32mArchive file deleted ✅\033[0m\n"

re: fclean all

pic :
	@echo "\n\033[1;32m<<<< -------------------------------------------------- >>>>\033[0m\n"

.PHONY: all bonus clean fclean re pic
