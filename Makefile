output: Main.o Ant.o Menu.o Board.o
	g++ Main.o Ant.o Menu.o Board.o -o output

Main.o: Main.cpp
	g++ -c -g -std=c++11 Main.cpp

Ant.o: Ant.cpp Ant.hpp
	g++ -c -g Ant.cpp

Menu.o: Menu.cpp Menu.hpp
	g++ -c -g -std=c++11 Menu.cpp

Board.o: Board.cpp Board.hpp
	g++ -c -g Board.cpp

zip:
		zip Project1_Jacobson_Sky.zip *.cpp *.hpp *.pdf Makefile

clean:
	rm *.o output
