CC = g++
OBJS = src/*.cpp
OBJ_NAME = trails
LINKER_FLAGS = -lsfml-graphics -lsfml-window -lsfml-system
COMPILER_FLAGS = -std=c++11
BIN = bin/

#Compile and run
all :
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(BIN)$(OBJ_NAME)
	$(BIN)$(OBJ_NAME)
