NAME = rush-02

SRC = ft_boxdivision.c \
      ft_box_utils.c \
      ft_parsedict.c \
      ft_readdict.c \
      ft_std_functions_copy.c \
      ft_validate.c

OBJS = ${SRC:.c=.o}

%.o: %.c
	@cc -Wall -Wextra -Werror -c $< -o $@

$(NAME): $(OBJS)
	@cc -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

all: $(NAME)

re: fclean all

.PHONY: all clean fclean re
