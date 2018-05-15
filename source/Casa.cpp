#include "Casa.h"

//Contrutores e destrutores da classe
Casa::Casa():
	Imovel()

{
numeroDePavimetos = -1;
numeroDeQuartos = -1;
areaDoTerrreno = -1;
areaConstruida = -1;



}

Casa::Casa(int numeroDePavimetos, int numeroDeQuartos,double areaDoTerrreno,
			double areaConstruida, int disponibilidadeAluguel, int disponibilidadeVenda,
			int tipoDeOferta, double valor, Endereco endereco):

	Imovel(disponibilidadeAluguel, disponibilidadeVenda, tipoDeOferta, valor,  endereco)
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
	std::string casa = 	"CASA \nNumero de Quartos: " + std::to_string(numeroDeQuartos) + "\n" +
						"Numero de Pavimentos: " + std::to_string(numeroDePavimetos) + "\n" +
						"Area do Terreno: " + std::to_string(areaDoTerrreno) + "\n" +
						"Area Construida: " + std::to_string(areaConstruida) + "\n" +
						"ENDRECO\n";
	
	return casa+getEndereco();

	
}