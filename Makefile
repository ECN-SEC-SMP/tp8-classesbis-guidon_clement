all : prog_tp8

rebuild : clean all

prog_tp8 : main.o animaux.o loup.o pierre.o ours.o lion.o
	g++ -o prog_tp78 main.o animaux.o loup.o pierre.o ours.o lion.o

main.o : main.cpp
	g++ -o main.o -c main.cpp -g

animaux.o :animaux.cpp
	g++ -o animaux.o -c animaux.cpp -g

loup.o :loup.cpp
	g++ -o loup.o -c loup.cpp -g

pierre.o :pierre.cpp
	g++ -o pierre.o -c pierre.cpp -g

ours.o :ours.cpp
	g++ -o ours.o -c ours.cpp -g

lion.o :lion.cpp
	g++ -o lion.o -c lion.cpp -g

clean :
	del *.o