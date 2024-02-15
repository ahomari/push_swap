FLAGS			= -Wall -Wextra -Werror
CC				= cc
RM				= rm -rf
NAME			= push_swap
HEAD			= include/push_swap.h 


SRC_FUNC		= src/ft_atoi.c src/ft_lstadd_back.c src/ft_lstadd_front.c src/ft_lstlast.c src/ft_lstnew.c src/ft_split.c src/ft_calloc.c src/ft_strdup.c src/ft_substr.c src/ft_dbl_free.c
F_OBJ			= ${SRC_FUNC:.c=.o}

SRC_MAN			= mandatory/push_swap.c mandatory/msg_error.c
S_OBJ			= ${SRC_MAN:.c=.o}

%.o: %.c		${HEAD} Makefile
				${CC} ${FLAGS} -c $< -o $@

${NAME}:		${F_OBJ} ${S_OBJ}
				@${CC} ${F_OBJ} ${S_OBJ} -o ${NAME}
				@echo "${GREEN}================================${DEFAULT}"
				@echo "${GREEN}=======| ${NAME} Created! |=======${DEFAULT}"
				@echo "${GREEN}================================${DEFAULT}"

all:			${NAME}


clean:
				@${RM} ${F_OBJ}
				@${RM} ${S_OBJ}
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