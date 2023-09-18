NAME1    = server
NAME2    = client
SRCS1    = server.c libft_utils_1.c libft_utils_2.c
SRCS2    = client.c libft_utils_1.c libft_utils_2.c
OBJS1    = server.o libft_utils_1.o libft_utils_2.o
OBJS2    = client.o libft_utils_1.o libft_utils_2.o
CC        = cc
CFLAGS    = -Wall -Wextra -Werror #-g3 -fsanitize=address
RM        = rm -f

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@


all:$(NAME1) $(NAME2)

$(NAME1):$(OBJS1)
		$(CC) $(CFLAGS) -o $(NAME1) $(OBJS1)

$(NAME2):$(OBJS2)
		$(CC) $(CFLAGS) -o $(NAME2) $(OBJS2)

clean:
		$(RM) $(OBJS1)
		$(RM) $(OBJS2)

fclean :    clean
		$(RM) $(NAME1)
		$(RM) $(NAME2)

re        :fclean all

.PHONY: all clean fclean re