NAME= file
OBJ_PATH=obj
COMP= clang++ -Wall -Wextra -Werror
SRC= main.cpp\


OBJ_NAME= $(SRC:.cpp=.o)

OBJ= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all:			$(NAME)

$(NAME) :  $(OBJ)
	@rm -rf $(NAME)
	@$(COMP) $(OBJ) -o $@

$(OBJ_PATH)/%.o: %.cpp 
	@mkdir -p $(OBJ_PATH) 
	@$(COMP) -g -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)
	@echo "\033[1;33m>> all objects files are deleted.\033[0m" 

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31m>> $(NAME) && all obbjects are deleted.\033[0m" 

re : fclean all