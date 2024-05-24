.PHONY: greet build rebuild clean_all clean_obj clean_lab3

greet: 
	@echo "chose an option:"
	@echo ">--build--<      : build project"
	@echo ">--rebuild--<    : clean and rebuild project"
	@echo ">--clean_all--<  : clean all files"
	@echo ">--clean_obj--<  : clean obj files"
	@echo ">--clean_lab3--< : clean lab3"
	@echo ">--lab3--<       : link project"
	
build: lab3
	./lab3 -n 5

rebuild: clean_all lab3
	./lab3 -d -n 5

clean_all: clean_obj clean_lab3
	
clean_obj:
	rm -rvf *.o

clean_lab3:
	rm -rvf lab3

lab3: out.o main.o task.o data.o input.o
	gcc -o lab3 out.o main.o task.o data.o input.o
	
out.o: out.c out.h
	gcc -c -o out.o out.c

main.o: main.c
	gcc -c -o main.o main.c

input.o: input.c input.h
	gcc -c -o input.o input.c

task.o: task.c task.h
	gcc -c -o task.o task.c

data.o: data.c data.h
	gcc -c -o data.o data.c
