NAME = account

FLAGS = -Wall -Wextra -Werror -std=gnu++98

SRCS = 	account.cpp test.cpp
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
	@rm -rf $(OBJS) *_account
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)