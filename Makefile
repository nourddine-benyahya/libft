SRC = $(wildcard ft_*.c)

BNS = $(wildcard ft_*_bonus.c)

OBJ = $(SRC:.c=.o)

OBJB = $(BNS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

all : $(NAME)

bonus : $(OBJB)
	ar rc $(NAME) $(OBJB)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all