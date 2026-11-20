NAME = libftprintf.a

CC = cc

CFLAGS	= -Wall -Wextra -Werror

SRC = printf.c printf_utils.c printf_utils_hex.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean 
	rm -f $(NAME)

re : fclean all

.PHONY : clean