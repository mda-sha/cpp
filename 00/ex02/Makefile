CPPFILES = tests.cpp
OFILES = $(patsubst %.cpp,%.o,$(CPPFILES))
DEPS = $(patsubst %.o,%.d,$(OFILES))
DEPFLAGS = -MMD -MF $(@:.o=.d)
NAME = tests

all:		$(NAME)

$(NAME):	$(OFILES)
			clang++ $(OFILES) -o $(NAME)
-include $(DEPS)

%.o:		%.cpp
			clang++ -c $< $(DEPFLAGS) -o $(<:.cpp=.o)

clean:		
			rm -f $(OFILES)
			rm -rf $(DEPS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re