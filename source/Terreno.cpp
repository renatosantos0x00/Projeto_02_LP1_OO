#include "Terreno.h"
#include <string>
using namespace std;

Terreno::Terreno():Imovel(){
	tipoDeImovel = TIPO_TERRENO;
	area = 0;
}

Terreno::Terreno(int tipoDeOferta, double valor, double area, 
				std::string cidade, std::string bairro,std::string logradouro,std::string cep,int numero)
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

std::string Terreno::getDescricao(){
	std::string terreno = "TERRENO \n\nArea: " + std::to_string(area) +
	"\nTipo de oferta: " + tipoDeOferta +
	"\nValor do imovel: " + std::to_string(valor);

	return terreno+endereco.getEndereco();
}

int Terreno::getTipoDeImovel(void){
	return tipoDeImovel;
}

std::string Terreno::getDescricaoCSV(void){
	return  "__Terreno__;_valor_;"+std::to_string(valor)+";_tipoDeOferta_;"+tipoDeOferta+
			";_area_;"+std::to_string(area)+";"+endereco.getEnderecoCSV();

	
}
