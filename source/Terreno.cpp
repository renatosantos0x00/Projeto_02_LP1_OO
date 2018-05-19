#include "Terreno.h"
#include <string>
using namespace std;

Terreno::Terreno():Imovel(){
	area = -1;
}

Terreno::Terreno(int tipoDeOferta, double valor, Endereco endereco,
				double area)
		:Imovel(tipoDeOferta, valor, endereco){


	this->area = area;

}

Terreno::~Terreno(){}

double Terreno::getArea(){
	return area;
}

void Terreno::setArea(double area){
	this->area = area;
}

string Terreno::getDescricao(){
	std::string terreno ="TERRENO \nArea: " + to_string(area) + "\n" +
						 "ENDERECO\n";

	return terreno+getEndereco();
}
