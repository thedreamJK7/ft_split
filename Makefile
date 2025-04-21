CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_countwords.c ft_issep.c ft_malloc.c ft_split.c main.c

OBJS = $(SRCS:.c=.o)

TARGET = Final

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)