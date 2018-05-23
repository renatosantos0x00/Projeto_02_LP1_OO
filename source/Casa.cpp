#include "Casa.h"
using namespace std;
//Contrutores e destrutores da classe
Casa::Casa():
	Imovel()
	
{

	numeroDePavimentos = -1;
	numeroDeQuartos = -1;
	areaDoTerreno = -1;
	areaConstruida = -1;

}

Casa::Casa(int numeroDePavimentos, int numeroDeQuartos, double areaDoTerreno,
			double areaConstruida, int tipoDeImovel, int tipoDeOferta, double valor, string cidade,
			 string bairro,string logradouro,string cep,int numero):
	Imovel(tipoDeImovel, tipoDeOferta, valor, cidade, bairro, logradouro, cep, numero)
{

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
						"\nArea Construida: " + std::to_string(areaConstruida);

	return casa + endereco.getEndereco();


}

unsigned long int Casa::getTamanhoDaClasse(void){
	return sizeof(Casa);
}