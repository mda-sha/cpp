CPPFILES = span.cpp main.cpp
OFILES = $(patsubst %.cpp,%.o,$(CPPFILES))
DEPS = $(patsubst %.o,%.d,$(OFILES))
DEPFLAGS = -MMD -MF $(@:.o=.d)
FLAGS = -Wall -Wextra -Werror -fsanitize=address
NAME = span

all:	$(NAME)

$(NAME):	$(OFILES)
			clang++ $(FLAGS) $(OFILES) -o $(NAME)
-include $(DEPS)

%.o:		%.cpp
			clang++ $(FLAGS) -c $< $(DEPFLAGS) -o $(<:.cpp=.o)

clean:		
			rm -f $(OFILES)
			rm -rf $(DEPS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re