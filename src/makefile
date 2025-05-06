# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Files
SRCS = main.c input.c file.c state.c
OBJS = $(SRCS:.c=.o)
TARGET = main

# Default target
all: clean $(TARGET)

# Build target
$(TARGET): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^

# Compile
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	@rm -f $(OBJS) $(TARGET)
