CC = gcc
CFLAGS = -Wall  -Wextra  -Werror
EXEC = morse
SRC = main.c  table_morse.c  ft_texte_vers_morse.c  ft_morse_vers_texte.c
OBJ = $(SRC:.c=.o)



all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) $(OBJ) -o $(EXEC)

%.o: %.c morse.h
          $(CC) $(CFLAGS) -c $< -o  $@

.PHONY: all clean fclean re


clean:
	rm -f  $(OBJ)

fclean: clean
	rm -f  $(EXEC)

re: fclean all
