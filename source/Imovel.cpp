#include "Imovel.h"

//Construtores e Destrutores da classe
Imovel::Imovel(){

	tipoDeOferta = -1;
	valor = -1;
	endereco = Endereco();

}
Imovel::Imovel(int tipoDeOferta, double valor, Endereco endereco)
{
	this->tipoDeOferta = tipoDeOferta;
	this->valor = valor;
	this->endereco = endereco;
}


Imovel::~Imovel(void){

}

//Metodos da classe

double Imovel::getValor(void){
	return valor;

}
int Imovel::getTipoDeOferta(void){
	return tipoDeOferta;

}

Endereco Imovel::getEndereco(void){
	return endereco;

}

