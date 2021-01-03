#OBJS specifies which files to compile as part of the project
OBJS = hello.cpp

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = hello

#This is the target that compiles our executable
all : $(OBJS)
	g++ $(OBJS) -w -lSDL2 -o $(OBJ_NAME)

#This will remove the executable for distribution purposes
clean: 
	rm -f hello

run: 
	./hello