NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	g++ $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	g++ $(CPPFLAGS) $(OBJS) -o $(NAME)


clean:
	-rm -f $(OBJS)

fclean:
	-rm -f $(OBJS)
	-rm -f $(NAME)

re: fclean all
