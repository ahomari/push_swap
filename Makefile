FLAGS			= -Wall -Wextra -Werror
CC				= cc
RM				= rm -rf
NAME			= push_swap
NAME_BONUS		= checker
HEAD			= include/push_swap.h
HEAD_BONUS		= include/push_swap_bonus.h 

SRC_FUNC_B		= bonus/src_bonus/ft_atoi_bonus.c bonus/src_bonus/ft_calloc_bonus.c bonus/src_bonus/ft_free_bonus.c bonus/src_bonus/ft_isdigit_bonus.c \
					bonus/src_bonus/ft_lstadd_back_bonus.c bonus/src_bonus/ft_lstadd_front_bonus.c bonus/src_bonus/ft_lstlast_bonus.c bonus/src_bonus/ft_lstnew_bonus.c \
					bonus/src_bonus/ft_lstsize_bonus.c bonus/src_bonus/ft_putendl_fd_bonus.c bonus/src_bonus/ft_split_bonus.c bonus/src_bonus/ft_strdup_bonus.c bonus/src_bonus/ft_substr_bonus.c \
					gnl/ft_strjoinn.c gnl/get_next_line.c bonus/src_bonus/ft_strchr_bonus.c bonus/src_bonus/ft_strcpy_bonus.c bonus/src_bonus/ft_strcmp.c
F_BONUS_OBJ		= ${SRC_FUNC_B:.c=.o}

SRC_FUNC		= src/ft_atoi.c src/ft_lstadd_back.c src/ft_lstadd_front.c src/ft_lstlast.c src/ft_lstnew.c src/ft_split.c \
					src/ft_calloc.c src/ft_strdup.c src/ft_substr.c src/ft_free.c src/ft_isdigit.c mandatory/print_linkedlist.c \
					src/ft_lstsize.c src/ft_putendl_fd.c
F_OBJ			= ${SRC_FUNC:.c=.o}

SRC_BUNUS		= bonus/checker_bonus.c bonus/msg_error_bonus.c bonus/operations_ab_bonus.c bonus/operations_bonus.c bonus/get_checker_bonus.c bonus/print_linkedlist.c
S_BONUS_OBJ		= ${SRC_BUNUS:.c=.o}

SRC_MAN			= mandatory/push_swap.c mandatory/msg_error.c mandatory/operations.c mandatory/operations_ab.c mandatory/sorting.c
S_OBJ			= ${SRC_MAN:.c=.o}

%.o: %.c		${HEAD} include/push_swap.h
				${CC} ${FLAGS} -c $< -o $@

%.o: %.c		${HEAD_BONUS} include/push_swap_bonus.h
				${CC} ${FLAGS} -c $< -o $@

${NAME}:		${F_OBJ} ${S_OBJ}
				@${CC} ${F_OBJ} ${S_OBJ} -o ${NAME} -g -fsanitize=address
				@echo "${GREEN}================================${DEFAULT}"
				@echo "${GREEN}=======| ${NAME} Created! |=======${DEFAULT}"
				@echo "${GREEN}================================${DEFAULT}"

bonus  :		${F_BONUS_OBJ} ${S_BONUS_OBJ}
				@${CC} ${F_BONUS_OBJ} ${S_BONUS_OBJ} -o ${NAME_BONUS} -g -fsanitize=address
				@echo "${GREEN}================================${DEFAULT}"
				@echo "${GREEN}=======| ${NAME_BONUS} Created! |=======${DEFAULT}"
				@echo "${GREEN}================================${DEFAULT}"

all:			${NAME}


clean:
				@${RM} ${F_OBJ}
				@${RM} ${S_OBJ}
				@${RM} ${F_BONUS_OBJ}
				@${RM} ${S_BONUS_OBJ}
				@echo "${YELLOW}=======================================${DEFAULT}"
				@echo "${YELLOW}=======| Object Files deleted! |=======${DEFAULT}"
				@echo "${YELLOW}=======================================${DEFAULT}"

fclean:			clean
				@${RM} ${NAME} ${NAME_BONUS}
				@echo "${RED}==============================${DEFAULT}"
				@echo "${RED}=======| All Deleted! |=======${DEFAULT}"
				@echo "${RED}==============================${DEFAULT}"

re: 			fclean all

.PHONY: 	fclean all re  clean

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m