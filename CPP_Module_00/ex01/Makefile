CC = clang++
SRCS = main.cpp PhoneBook.cpp Contact.cpp
NAME = phonebook
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

.cpp.o : $(SRCS)
		$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean
		make all

.PHONY: all clean fclean re
