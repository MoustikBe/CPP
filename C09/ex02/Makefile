NAME    = PmergeMe
C+	    = c++
CFLAG   = -Wall -Werror -Wextra -std=c++98 -g3
RM      = rm -rf
OBJDIR  = obj
SOURCES = src/main.cpp src/PmergeMe.cpp

OBJECTS = $(SOURCES:%.cpp=$(OBJDIR)/%.o)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(C+) $(CFLAG) -c $< -o $@

$(NAME): $(OBJECTS)
	@$(C+) $(OBJECTS) -o $(NAME)
	@echo "\033[0;32mProject compiled -> PmergeMe"

clean : 
	@$(RM) -r $(OBJDIR)  > /dev/null 2>&1
	@echo "\033[0;31mObjects removed"

fclean : clean
	@$(RM) -r $(OBJDIR)  > /dev/null 2>&1
	@$(RM) $(NAME)
	@echo "\033[0;31mProject cleaned"

all : $(NAME)

re: fclean all

.PHONY: clean all re fclean
