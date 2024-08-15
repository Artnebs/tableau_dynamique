# Macros
CC = gcc
CFLAGS = -c -g -Wall
EXE = main

# recherche de tous les fichiers .c du répertoire
SRC = $(wildcard *.c)
# liste des fichiers .o associés aux .c
OBJ = $(SRC:.c=.o)

# édition de lien
$(EXE) : $(OBJ)
	@echo "\n* Construction de $@"
	$(CC) $^ -o $@

# fichiers objets
%.o : %.c
	$(CC) $(CFLAGS) $<

# nettoyage
clean :
	rm -f *.o $(EXE)
