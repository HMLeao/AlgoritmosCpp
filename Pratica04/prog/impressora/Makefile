#
#	Makefile written by Henrique Martins
#
#	-Enter "make clean" to clean the project
#	-Enter "make all" to build the target and run or just type "make" to simplify things

#	Put here the output name
PROGNAME = Pratica04
CLS = clear

TARGET = impressora

#	Specify the source list
SRC = $(TARGET).cpp  # for example: foo.cpp bar.cpp
OBJ = $(SRC:%.cpp=%.o)

CC = g++
CPPFLAGS = -g -gdwarf-2 -Wall -std=c++11 

REMOVE = rm -f

all: clean comp out run

run:
	@clear
	@echo -------Running------
	@echo
	@echo
	@./$(PROGNAME)
	@echo
	@echo -----terminated------
	@echo
#	Clean
clean:
	@echo --cleaning project---
	@echo
	$(REMOVE) $(OBJ)
	$(REMOVE) $(PROGNAME)
	$(REMOVE) $(PROGNAME).exe
	@echo
	@echo -------done--------
	@echo

out: $(OBJ)
	@echo ----Generating out---
	@echo
	$(CC) -o $(PROGNAME) $(OBJ)
	@echo
	@echo --------done--------
	@echo

comp:
	@echo ---compiling $(SRC) ---
	@echo
	$(CC) -c $(SRC) $(CPPFLAGS)
	@echo
	@echo --------done--------
	@echo
