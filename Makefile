NAME    := application
SRCDIR  := .
OBJDIR  := Bin-Int
BINDIR  := Bin
SRC     := $(wildcard $(SRCDIR)/**/*.c) $(wildcard $(SRCDIR)/*.c)
OBJ     := $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))
BIN     := $(BINDIR)/$(NAME)
CC      := gcc
CFLAGS  += -W -Werror -Wall -Wextra
RM      := rm -f
MKDIR_P := mkdir -p
ECHO    := echo -e

# Find all unique parent directories of header files
HEADER_DIRS := $(shell find . -name "*.h" -exec dirname {} \; | sort | uniq)

# Generate include flags for each header directory
INC := $(addprefix -I,$(HEADER_DIRS))

all : $(BIN)

$(BIN) : $(OBJ)
	@$(MKDIR_P) $(BINDIR)
	@$(CC) $(CFLAGS) $(INC) -o $(BIN) $(OBJ) $(LDLIBS)
	@$(ECHO) '\033[0;32m> Compiled\033[0m'

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(MKDIR_P) $(@D)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean :
	@$(RM) $(OBJDIR)/*.o
	@$(RM) -r $(OBJDIR)
	@$(RM) *~
	@$(RM) \#*#
	@$(ECHO) '\033[0;31m> Directory cleaned\033[0m'

fclean : clean
	@$(RM) -r $(BINDIR)
	@$(ECHO) '\033[0;31m> Remove executable\033[0m'

re : fclean all

.PHONY : all clean fclean re