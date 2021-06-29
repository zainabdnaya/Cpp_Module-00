NAME = ex02

FLAGS = -Wall -Wextra -Werror 

target = main.cpp \
		Bureaucrat.cpp \
		Form.cpp\
		  PresidentialPardonForm.cpp\
		  RobotomyRequestForm.cpp\
		  ShrubberyCreationForm.cpp\

		
headers = Bureaucrat.hpp \
		  Form.hpp \
		  PresidentialPardonForm.hpp\
		  RobotomyRequestForm.hpp\
		  ShrubberyCreationForm.hpp\

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