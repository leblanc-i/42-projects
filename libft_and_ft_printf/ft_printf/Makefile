INCLUDES = ft_printf.h

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

SRC = ft_printf.c src/ft_strcpy.c src/ft_putstr.c src/ft_putnbr.c \
	src/ft_putnbr_hex.c src/ft_putnbr_base_hex.c src/ft_putchar.c \
	src/ft_put_uns_nbr.c src/ft_put_ptr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
