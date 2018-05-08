t2: args.o arquivo.o circulo.o comandos.o funcoes.o learq.o retangulo.o main.o
	gcc args.o arquivo.o circulo.o comandos.o funcoes.o learq.o retangulo.o main.o -o t2 -pedantic -ansi -g

args.o: args.c args.h
		gcc -c args.c -o args.o -Wall -pedantic -ansi -g
arquivo.o: arquivo.c arquivo.h
		gcc -c arquivo.c -o arquivo.o -Wall -pedantic -ansi -g	
	
circulo.o: circulo.c circulo.h
		gcc -c circulo.c -o  circulo.o -Wall -pedantic -ansi -g
		
comandos.o: comandos.c comandos.h
	gcc -c comandos.c -o comandos.o -Wall -pedantic -ansi -g
	
funcoes.o: funcoes.c funcoes.h
		gcc -c funcoes.c -o funcoes.o -Wall -pedantic -ansi -g
	
learq.o: learq.c learq.h
	gcc -c learq.c -o learq.o -Wall -pedantic -ansi -g

retangulo.o: retangulo.c retangulo.h
	gcc -c retangulo.c -o retangulo.o -Wall -pedantic -ansi -g

main.o: main.c
	gcc -c main.c -o main.o -Wall -pedantic -ansi -g
clean:
	rm -rf *.o