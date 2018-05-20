#include "Casa.h"
using namespace std;
//Contrutores e destrutores da classe
Casa::Casa():
	Imovel()
	
{

	numeroDePavimetos = -1;
	numeroDeQuartos = -1;
	areaDoTerrreno = -1;
	areaConstruida = -1;

}

Casa::Casa(int numeroDePavimetos, int numeroDeQuartos, double areaDoTerrreno,
			double areaConstruida, int tipoDeOferta, double valor, string cidade,
			 string bairro,string logradouro,string cep,int numero):
	Imovel(tipoDeOferta, valor, cidade, bairro, logradouro, cep, numero)
{

this->numeroDePavimetos = numeroDePavimetos;
this->numeroDeQuartos = numeroDeQuartos;
this->areaDoTerrreno = areaDoTerrreno;
this->areaConstruida = areaConstruida;

}


Casa::~Casa(){

}

//Metodos da classe

std::string Casa::getDescricao(void){
	std::string casa = 	"CASA \n\nNumero de Quartos: " + std::to_string(numeroDeQuartos) +
						"\nNumero de Pavimentos: " + std::to_string(numeroDePavimetos) +
						"\nArea do Terreno: " + std::to_string(areaDoTerrreno) +
						"\nArea Construida: " + std::to_string(areaConstruida);

	return casa+endereco.getEndereco();


}
