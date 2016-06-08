DIR_SRC=./src
DIR_INC=./inc
DIR_BIN=./output

CC=gcc
CFLAGS=-g -Wall -I$(DIR_INC)

$(DIR_BIN)/formatTrans: $(DIR_BIN)/main.o $(DIR_BIN)/inputFormat.o $(DIR_BIN)/str.o
	gcc -o $(DIR_BIN)/formatTrans $(DIR_BIN)/*.o 
	@echo 1st


$(DIR_BIN)/main.o: $(DIR_SRC)/main.c 
	gcc -c $(CFLAGS) $(DIR_SRC)/main.c -o $(DIR_BIN)/main.o
	@echo 2nd
	

$(DIR_BIN)/inputFormat.o:$(DIR_SRC)/inputFormat.c 
	@echo 3rd
	gcc -c $(CFLAGS) $(DIR_SRC)/inputFormat.c -o $(DIR_BIN)/inputFormat.o
	

$(DIR_BIN)/str.o:$(DIR_SRC)/str.c 
	gcc -c $(CFLAGS) $(DIR_SRC)/str.c -o $(DIR_BIN)/str.o
	@echo fourth


.PHONY: clean
clean:
	rm $(DIR_BIN)/*.o
	echo clean


