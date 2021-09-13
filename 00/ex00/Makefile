CPPFILES = megaphone.cpp
OFILES = $(patsubst %.cpp,%.o,$(CPPFILES))
FLAGS = -Wall -Wextra -Werror
NAME = megaphone

all:	$(NAME)

$(NAME):	$(OFILES)
			@clang++ $(FLAGS) $(OFILES) -o $(NAME)

%.o:		%.cpp
			@clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)

clean:		
			@rm -f $(OFILES)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re