#include "Terreno.h"
#include <string>
using namespace std;

Terreno::Terreno():Imovel(){
	area = -1;
}

Terreno::Terreno(int tipoDeImovel, int tipoDeOferta, double valor,
				double area,string cidade, string bairro,string logradouro,string cep,int numero)
		:Imovel(tipoDeImovel, tipoDeOferta, valor, cidade, bairro,logradouro, cep,numero){


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
	string terreno = "TERRENO \n\nArea: " + to_string(area);

	return terreno+endereco.getEndereco();
}
