SRCS	= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

OBJ		= $(SRCS:.s=.o)

FLAGS	= -Wall -Wextra -Werror

NAME	= libasm.a

all: $(NAME)

%.o: %.s
	nasm -f macho64 $<

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

build:
	gcc $(FLAGS) main.c $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf a.out

re: fclean all