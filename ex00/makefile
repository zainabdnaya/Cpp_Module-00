NAME= megaphone
OBJ_PATH =  ./
COMP= clang++ -Wall -Wextra -Werror

SRC= megaphone.cpp\

OBJ_NAME = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ_NAME)
		@rm -rf $(NAME)
		@$(COMP) $(OBJ_NAME) -o $@
	
$(OBJ_PATH)/%.o: %.cpp 
	@mkdir -p $(OBJ_PATH) 
	@$(COMP) -g -o $@ -c $<

clean:
	@rm -rf $(OBJ_NAME)
	@echo "\033[1;33m>> all objects files are deleted.\033[0m" 

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31m>> $(NAME) && all objects are deleted.\033[0m" 

re : fclean all