NAME = convert

# FLAGS = -Wall -Wextra -Werror 

target = convert.cpp\
		tools.cpp\
			
headers = convert.hpp\

OBJS = $(target:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(headers)
	@clang++ $(FLAGS) -c $< -o $@

 
$(NAME): $(OBJS)
	@clang++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n \x1b[31m Make works Succesfully!\n\x1b[0m"


clean:
	@rm -rf $(OBJS)
	@echo "\n \x1b[31m All The objects has been deleted!\n \x1b[0m"

fclean: clean
	@rm -rf $(NAME)

re: fclean all