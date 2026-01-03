NAME    = megaphone
# SRCS    = megaphone.cpp
OBJS    = $(SRCS:.cpp=.o)

CC      = c++
# Mandatory flags including the C++98 standard
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM      = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

# Explicitly define how to build .o files
%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re