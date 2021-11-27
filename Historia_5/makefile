historia_5: main.cpp verificar
	g++ -o $@ $<

verificar: tokens.o verificar.o 
	g++ -g -o verificar verificar.o tokens.o

verificar.o: verificar.cpp tokens.o
	g++ -g -c verificar.cpp

tokens.o: tokens.cpp tokens.h
	g++ -g -c tokens.cpp

clean:
	rm -f *.o *.exe *.class
	rm -rf __pycache__/

java: Tokens.java
	javac Tokens.java
	