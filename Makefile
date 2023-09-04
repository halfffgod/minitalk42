SRC_SERVER = server.c
SRC_CLIENT = client.c
INC		=	-I. -I$(LIBFT_DIR)

LIBFT		=	./libft/libft.a
LIBFT_DIR	=	./libft

NAME_SERVER = server
NAME_CLIENT = client

OBJ_SERVER = server.o
OBJ_CLIENT = client.o
#OBJ_SERVER = $(patsubst %.c, %.o, $(SRC_SERVER))
#OBJ_CLIENT = $(patsubst %.c, %.o, $(SRC_CLIENT))

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_SERVER): $(LIBFT)
	@$(CC) $(CFLAGS) $(SRC_SERVER) $(LIBFT) $(INC) -o server

$(NAME_CLIENT): $(LIBFT)
	@$(CC) $(CFLAGS) $(SRC_CLIENT) $(LIBFT) $(INC) -o client

$(LIBFT):
	$(MAKE) -C ./libft

clean:
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT)
fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME_CLIENT) $(NAME_SERVER)
re: fclean all

.PHONY: server client all re fclean  clean