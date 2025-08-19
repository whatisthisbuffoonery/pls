CC := cc
CFLAGS := -Wall -Wextra -Werror
AR := ar
ARFLAGS := rcs

HEAD := ft.h
I := includes/
INC := $(addprefix $(I),$(HEAD))

LIB := libft.a

o1 := ft_putchar.o
o2 := ft_swap.o
o3 := ft_putstr.o
o4 := ft_strlen.o
o5 := ft_strcmp.o
OBJ := $(o1) $(o2) $(o3) $(o4) $(o5)

all: $(LIB)

$(LIB): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)

re: fclean all

$(o1): srcs/ft_putchar.c $(INC)
	$(CC) $(CFLAGS) -c $< -I$(I) -o $@
$(o2): srcs/ft_swap.c $(INC)
	$(CC) $(CFLAGS) -c $< -I$(I) -o $@
$(o3): srcs/ft_putstr.c $(INC)
	$(CC) $(CFLAGS) -c $< -I$(I) -o $@
$(o4): srcs/ft_strlen.c $(INC)
	$(CC) $(CFLAGS) -c $< -I$(I) -o $@
$(o5): srcs/ft_strcmp.c $(INC)
	$(CC) $(CFLAGS) -c $< -I$(I) -o $@

.PHONY: all clean fclean re
