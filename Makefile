default: 
	echo "Type: 'make c1' to compile the contents of Chapter 1" 
	echo "Type: 'make run-c1' to run program c1"
	echo "Type: 'make clean-c1' to clean the binaries if program c1" 

c1: ./src/Section-1/main.c 
	gcc ./src/Section-1/main.c -o ./bin/Chapter-1.out

run-c1: c1
	./bin/./Chapter-1.out

clean-c1:
	rm ./bin/Chapter-1.out

clean: 
	rm ./bin/*.out 
