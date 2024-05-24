.PHONY: greet build lab3 rebuild clean_all clean_obj clean_lab3

greet: 
	@echo "chose your option:"
	@echo "<==build==>      : build / rebuild project"
	@echo "<==rebuild==>    : clean / build / rebuild project"
	@echo "<==clean_all==>  : clean all files"
	@echo "<==clean_obj==>  : clean obj"
	@echo "<==clean_lab3==> : clean lab3"
	@echo "<==lab3==>       : link project"
	
build: lab3
	./lab3 -m 7 -n 8

rebuild: clean_all lab3
	./lab3 -m 7 -d -n 8

clean_all: clean_obj clean_lab3
	
clean_obj:
	rm -rvf *.o

clean_lab3:
	rm -rvf lab3

lab3: output.o main.o func.o data.o input.o
	gcc -o lab3 output.o main.o func.o data.o input.o
	
output.o: output.c output.h
	gcc -c -o output.o output.c

main.o: main.c
	gcc -c -o main.o main.c

input.o: input.c input.h
	gcc -c -o input.o input.c

func.o: func.c func.h
	gcc -c -o func.o func.c

data.o: data.c data.h
	gcc -c -o data.o data.c
