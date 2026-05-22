NAME = push_swap
CC = cc
FLAGS = -g -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT = ${LIBFT_DIR}/libft.a
OBJS = ${SRCS:.c=.o}

SRCS =	stack.c parse.c main.c utils.c algo_simple.c algo_utils.c push_swap_operations.c rotate_operations.c \
		reverse_operations.c

all: ${LIBFT} ${NAME}
	@echo "\033[0;32m✓ Compilando arquivos \033[0m"
	@echo " "
	@rm -f ${OBJS}

${LIBFT}:
	@make -C ${LIBFT_DIR}

${NAME}: ${OBJS}
	@${CC} ${FLAGS} ${OBJS} -L ${LIBFT_DIR} -lft -o ${NAME}

%.o: %.c
	@${CC} ${FLAGS} -I ${LIBFT_DIR} -c $< -o $@

clean:
	@make -C ${LIBFT_DIR} clean
	@rm -f ${OBJS}

fclean: clean
	@make -C ${LIBFT_DIR} fclean
	@rm -f ${NAME}

re: fclean all
	@echo "\033[0;32mRecompilando...\033[0m"
	@echo "\033[0;31m🗑️ Limpando objetos...\033[0m"
	@rm -f ${OBJS}
	@echo "\033[0;32mRecompilado com sucesso!\033[0m"

.PHONY: all clean fclean re