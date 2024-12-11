# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -g

# Source files and object files
SRCS = student.c stud_del.c stud_mod.c stud_save.c stud_show.c
OBJS = $(SRCS:.c=.o)

# Output executable name
TARGET = student_system

# Default target
all: $(TARGET)

# Linking the program
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compiling source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run