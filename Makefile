.PHONY: all copy make move clean run
CC = gcc
OUT_FLAG = -o
CFLAGS = -Wall -Wextra -Werror -pedantic
MAIN_DEF = main.c
PRINT_TREE = binary_tree_print.c
# change once if you changed the name of the folders
MAIN_FOLDER = MAIN_LOCATION/
OUTPUT_FOLDER = OUTPUT/

# change here
NAME_NUM = 0-
NAME_of_file = binary_tree_node.c
OUTPUT_NAME = 0-n

# --------------------------------
NAME = $(NAME_NUM)$(NAME_of_file)
main_name = $(NAME_NUM)$(MAIN_DEF)
main_READY = $(MAIN_FOLDER)$(main_name)
run_place = $(OUTPUT_FOLDER)$(OUTPUT_NAME)
OUTPUT_NAME_FLAG = $(OUT_FLAG) $(OUTPUT_NAME)
PRINT_READY = $(MAIN_FOLDER)$(PRINT)
# ----------------------------------
# some times this need to change
NEED = $(PRINT_TREE) $(main_name) $(NAME)

#functions here
all:  copy make move clean run

# copying the main from folder mains
copy:
	cp $(main_READY) .
	cp $(PRINT_READY) .

# making the file
make: $(NEED)
	$(CC) $(CFLAGS) $(NEED) $(OUTPUT_NAME_FLAG)

# moving the output file to folder OUT
move:
	mv $(OUTPUT_NAME) $(OUTPUT_FOLDER)/

# deleting the main folder
clean:
	rm -rf $(main_name)
# running the out put
run:
	./$(run_place)
