NAME    = War
SRCS    = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS    = $(SRCS:.cpp=.o)

CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM      = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re