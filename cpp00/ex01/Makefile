NAME = pb

FLAGS = -Wall -Wextra -Werror -std=gnu++98

SRCS = 	main.cpp phonebook.cpp contacts.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@echo "is Compiling..."
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@echo "Creating objects..."
	@clang++ $(FLAGS) -c $(SRCS)

all: $(NAME)

clean:
	@echo "Cleaning..."
	@rm -rf $(OBJS) *_pb
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)