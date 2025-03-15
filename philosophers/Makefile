# Compiler and flags
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I Include

# Directories
SRCDIR  = Srcs
OBJDIR  = Obj
INCDIR  = Include

# Executable name
NAME    = philo

# Source files (Manually listed)
SRCS    = main.c monitor.c philo_utils.c philosophers.c utils.c
# Object files
OBJS    = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

# Colors
GREEN   = \033[0;32m
RED     = \033[0;31m
RESET   = \033[0m


# Rules
all: $(NAME)

# Create the executable
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LDFLAGS)
	@echo "$(RED)✔ Philosophers Compiled!$(RESET)"

# Compile .c to .o
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(RED)Compiled:$(RESET) $(GREEN)$@ ✔$(RESET)"

# Create Obj directory if it doesn't exist
$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Clean object files
clean:
	@rm -rf $(OBJDIR)
	@echo "$(RED)🗑️  Object files removed!$(RESET)"

# Clean everything
fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)🗑️  Executable removed!$(RESET)"

# Recompile everything
re: fclean all

.PHONY: all clean fclean re
