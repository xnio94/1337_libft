name=libft.a 


all: $(name)

$(name):
	gcc -Wall -Wextra -Werror -c *.c
	ar rc $(name) *.o
	ranlib libft.a
clean:
	rm -f *.o
fclean: clean
	rm -f libft.a
re: fclean all