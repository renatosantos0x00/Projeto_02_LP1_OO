#include "Imovel.h"

//Construtores e Destrutores da classe
Imovel::Imovel(void){

	disponibilidadeAluguel = -1;
	disponibilidadeVenda =  -1;
	tipoDeOferta = -1;
	valor = -1;
	endereco = Endereco();

}
Imovel::Imovel(int disponibilidadeAluguel, int disponibilidadeVenda,
		int tipoDeOferta, double valor, Endereco endereco
		)
{
	
	this->disponibilidadeVenda = disponibilidadeVenda;
	this->disponibilidadeAluguel =  disponibilidadeAluguel;
	this->tipoDeOferta = tipoDeOferta;
	this->valor = valor;
	this->endereco = endereco;

}


Imovel::~Imovel(void){

}

//Metodos da classe

double Imovel::getValor(void){

}
int Imovel::getTipoDeOferta(void){


}

Endereco Imovel::getEndereco(void){


}

