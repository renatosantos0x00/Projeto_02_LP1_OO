#include "Casa.h"
using namespace std;
//Contrutores e destrutores da classe
Casa::Casa():
	Imovel()
	
{
	tipoDeImovel = TIPO_CASA;
	numeroDePavimentos = 0;
	numeroDeQuartos = 0;
	areaDoTerreno = 0;
	areaConstruida = 0;

}

Casa::Casa(int numeroDePavimentos, int numeroDeQuartos, double areaDoTerreno,
			double areaConstruida, int tipoDeOferta, double valor, string cidade,
			 string bairro,string logradouro,string cep,int numero):
	Imovel(tipoDeOferta, valor, cidade, bairro, logradouro, cep, numero)
{

	tipoDeImovel = TIPO_CASA;
	this->numeroDePavimentos = numeroDePavimentos;
	this->numeroDeQuartos = numeroDeQuartos;
	this->areaDoTerreno = areaDoTerreno;
	this->areaConstruida = areaConstruida;

}


Casa::~Casa(){

}

//Metodos da classe

std::string Casa::getDescricao(void){
	std::string casa = 	"CASA \n\nNumero de Quartos: " + std::to_string(numeroDeQuartos) +
						"\nNumero de Pavimentos: " + std::to_string(numeroDePavimentos) +
						"\nArea do Terreno: " + std::to_string(areaDoTerreno) +
						"\nArea Construida: " + std::to_string(areaConstruida) +
						"\nTipo de oferta: " + tipoDeOferta +
						"\nValor do imovel: " + std::to_string(valor);

	return casa + endereco.getEndereco();


}

int Casa::getTipoDeImovel(void){
	return tipoDeImovel;
}