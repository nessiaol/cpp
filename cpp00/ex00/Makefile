NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=gnu++98

SRCS = 	megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@echo "Tyler is Compiling..."
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@echo "Creating objects..."
	@clang++ $(FLAGS) -c $(SRCS)

all: $(NAME)

clean:
	@echo "Cleaning..."
	@rm -rf $(OBJS) *_megaphone
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)