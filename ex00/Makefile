NAME    = megaphone
C+	    = c++
CFLAG   = -Wall -Werror -Wextra
RM      = rm -rf
SOURCES = megaphone.cpp
OBJECTS = $(SOURCES:%.cpp=%.o)

%.o: %.c 
	@$(C+) $(CFLAG) -c $< -o $@
	@echo "Objects compiled"

$(NAME): $(OBJECTS)
	@$(C+) $(OBJECTS) -o $(NAME)
	@echo "Project compiled -> ./megaphone [text]"

clean : 
	@$(RM) $(OBJECTS)
	@echo "Objects removed"

fclean : clean
	@$(RM) $(NAME)
	@echo "Project cleaned"

all : $(NAME)

re: fclean all

.PHONY: clean all re fclean
