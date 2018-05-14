#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"
#include <string>
using namespace std;
class Terreno: public Imovel{
	double area;
	public:
		Terreno();
		Terreno(int disponibilidadeAluguel, int disponibilidadeVenda,int tipoDeOferta,double valor, Endereco endereco,
				double area);
		double getArea();
		setArea(double area);
};
#endif
