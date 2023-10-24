parametrosCompilacao=-Wall
nomePrograma=tela

all: $(nomePrograma)

$(nomePrograma): main.o TelaDesenho.o Circulo.o Retangulo.o
	g++ -o $(nomePrograma) main.o TelaDesenho.o Circulo.o Retangulo.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

TelaDesenho.o: TelaDesenho.hpp TelaDesenho.cpp
	g++ -c TelaDesenho.cpp $(parametrosCompilacao)

Circulo.o: Circulo.hpp Circulo.cpp
	g++ -c Circulo.cpp $(parametrosCompilacao)

Retangulo.o: Retangulo.hpp Retangulo.cpp
	g++ -c Retangulo.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)