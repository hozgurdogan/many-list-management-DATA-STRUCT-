all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -c -I "./include" ./src/Liste.cpp -o ./lib/Liste.o
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/YoneticiListesi.cpp -o ./lib/YoneticiListesi.o


bagla:
	g++ ./lib/Liste.o ./lib/YoneticiListesi.o ./lib/main.o  ./lib/Dugum.o -o ./bin/program
calistir:
	./bin/program