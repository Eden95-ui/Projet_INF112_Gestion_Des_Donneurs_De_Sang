TARGET = projetGestionSang
CC = gcc
CFLAGS = -Wall -Wextra -I./headers `mysql_config --cflags`
LDFLAGS = `mysql_config --libs`
SRC = main.c bd.c fonction.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(OBJ) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

%.o: %.c
    $(CC) -c $< -o $@ $(CFLAGS)

run: $(TARGET)
    ./$(TARGET)

clean:
    rm -f $(OBJ) $(TARGET)
