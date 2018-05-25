#include "Terreno.h"
#include <string>
using namespace std;

Terreno::Terreno():Imovel(){
	tipoDeImovel = TIPO_TERRENO;
	area = 0;
}

Terreno::Terreno(int tipoDeOferta, double valor, double area, 
				string cidade, string bairro,string logradouro,string cep,int numero)
		:Imovel(tipoDeOferta, valor, cidade, bairro, logradouro, cep, numero){

	tipoDeImovel = TIPO_TERRENO;
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
	string terreno = "TERRENO \n\nArea: " + to_string(area) +
	"\nTipo de oferta: " + tipoDeOferta +
	"\nValor do imovel: " + std::to_string(valor);

	return terreno+endereco.getEndereco();
}

int Terreno::getTipoDeImovel(void){
	return tipoDeImovel;
}

string Terreno::getDescricaoCSV(void){
	return  "__Terreno__;_valor_;"+std::to_string(valor)+";_tipoDeOferta_;"+tipoDeOferta+
			";_area_;"+to_string(area)+";"+endereco.getEnderecoCSV();

	
}
