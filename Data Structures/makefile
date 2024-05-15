program: derle calistir


derle:
	g++ -I ./include/ -o ./lib/DosyaYazdir.o -c ./src/DosyaYazdir.cpp	
	g++ -I ./include/ -o ./lib/SayilarListesi.o -c ./src/SayilarListesi.cpp
	g++ -I ./include/ -o ./lib/Sayi.o -c ./src/Sayi.cpp
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o ./lib/Basamak.o -c ./src/Basamak.cpp
	g++ -I ./include/ -o ./lib/YoneticiListesi.o -c ./src/YoneticiListesi.cpp
	g++ -I ./include/ -o ./lib/YoneticiDugum.o -c ./src/YoneticiDugum.cpp

	g++ -I ./include/ -o ./bin/main ./lib/DosyaYazdir.o  ./lib/SayilarListesi.o ./lib/Sayi.o ./lib/Dugum.o ./lib/Basamak.o ./lib/YoneticiListesi.o  ./lib/YoneticiDugum.o   ./src/main.cpp

calistir:
	./bin/main