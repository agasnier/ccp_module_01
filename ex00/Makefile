NAME = BraiiiiiiinnnzzzZ

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g

SRCS_DIR = src
OBJS_DIR = obj
INCS_DIR = include

SRCS =	$(SRCS_DIR)/main.cpp \
		$(SRCS_DIR)/Zombie.cpp \
		$(SRCS_DIR)/newZombie.cpp \
		$(SRCS_DIR)/randomChump.cpp

OBJS = $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

HEADERS = $(INCS_DIR)/Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS) 
	@echo "Compilation..."
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Compilation OK."

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(HEADERS)
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -I$(INCS_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

