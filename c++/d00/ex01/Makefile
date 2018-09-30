NAME =phonebook
FLAGS=-Wall -Werror -Wextra
SRCS=*.cpp

#Green
GR=\033[1;32m

#No Colour
NC=\033[0m

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) $(SRCS) -o $(NAME)
	@echo "[ $(GR)Build Complete$(NC) ]"

clean:
	@rm -rf $(NAME)
	@echo "[ $(GR)Removed Executables$(NC) ]"

re: clean all
