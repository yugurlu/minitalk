NAME1 = server

NAME2 = client

all :
	@make -C ./utils/ft_printf
	@gcc -Wall -Wextra -Werror server.c ./utils/ft_printf/libftprintf.a -o $(NAME1)
	@gcc -Wall -Wextra -Werror client.c ./utils/ft_printf/libftprintf.a -o $(NAME2)

clean :
	@make clean -C ./utils/ft_printf
	@rm -rf client.o server.o

fclean : clean
	@make fclean -C ./utils/ft_printf
	@rm -rf $(NAME1) $(NAME2)

re : fclean all
