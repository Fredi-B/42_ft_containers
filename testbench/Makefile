# Makefile

NAME = containers
CPP = c++
CPP_FLAGS= -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp \
	utility_test.cpp

OBJ_DIR = obj
OBJECTS := $(patsubst %.cpp,%.o,$(SRCS))
OBJECTS := $(addprefix $(OBJ_DIR)/,$(OBJECTS))

$(NAME): $(OBJ_DIR) $(OBJECTS)
	$(CPP) $(CPP_FLAGS) $(OBJECTS) -o $(NAME)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

.phony: all
all: $(NAME)

.phony: clean
clean:
	rm -f $(OBJECTS)
	rm -rf $(OBJ_DIR)

.phony: fclean
fclean: clean
	rm -f $(NAME) *~

.phony: re
re: fclean all