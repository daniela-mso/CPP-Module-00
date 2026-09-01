NAME	=	phonebook

CC		=	g++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	contact.cpp main.cpp phonebook.cpp

OBJS	=	$(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
		rm -f $(OBJS)

fclean: clean
		rm  -f $(NAME)

re: fclean all
