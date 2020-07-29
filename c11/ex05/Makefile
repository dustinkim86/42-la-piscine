CC = gcc
CFLAGS = -Wall -Werror -Wextra

INCS = -I ./includes/
SRC_DIR = ./srcs

OBJS = $(addprefix $(SRC_DIR)/, $(SRCS:.c=.o))
SRCS = ft_string.c \
	   main.c \

TARGET = do-op

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(INCS)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

all: $(TARGET)
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(TARGET)
re:
	fclean all
