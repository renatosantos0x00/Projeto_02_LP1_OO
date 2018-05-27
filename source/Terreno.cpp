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

void Terreno::setDescricaoCSV(std::string *descricao){
    std::string atributo, cep, cid, bai, log;
    int num=0;


    // Atributos de imovel
    atributo = recuperaValorDeCelula(descricao,"_valor_");
    this->valor = std::stod(atributo); 
    this->tipoDeOferta = recuperaValorDeCelula(descricao,"_tipoDeOferta_");

    //Endereco
    atributo = recuperaValorDeCelula(descricao,"_numero_");
    num = std::stoi(atributo);

    cep = recuperaValorDeCelula(descricao,"_cep_");
    cid = recuperaValorDeCelula(descricao,"_cidade_");
    bai = recuperaValorDeCelula(descricao,"_bairro_");
    log = recuperaValorDeCelula(descricao,"_logradouro_");

    endereco = Endereco(cid, bai, log, cep, num);

    //atributos especiais da classe

    atributo = recuperaValorDeCelula(descricao, "_area_");
	this->area = std::stod(atributo);
}
		