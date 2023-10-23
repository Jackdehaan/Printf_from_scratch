LIBRARY_NAME = libftprintf.a 

SRC_FILES = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putstring.c 

OBJ_FILES = $(SRC_FILES:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


$(LIBRARY_NAME): $(OBJ_FILES)
	ar rcs $@ $(OBJ_FILES)


all: $(LIBRARY_NAME)


clean:
	rm -f $(OBJ_FILES)


fclean: clean
	rm -f $(LIBRARY_NAME)


re: fclean all

.PHONY: all clean fclean re
