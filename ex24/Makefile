CC = cc
FLAGS = -Wall -Wextra -Werror
DEPS = includes
OBJDIR = srcs

TARGET =  ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
OBJS = $(addprefix $(OBJDIR)/, $(TARGET))

%.o : %.c 
	$(CC) $(FLAGS) -c $< -o $@ -I $(DEPS)

all: libft.a

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all

libft.a: $(OBJS)
	ar -rc libft.a $^
