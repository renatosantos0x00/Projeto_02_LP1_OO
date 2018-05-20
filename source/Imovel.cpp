#include "Imovel.h"
using namespace std;
//Construtores e Destrutores da classe
Imovel::Imovel(){

	tipoDeOferta = -1;
	valor = -1;
	endereco = Endereco();

}
Imovel::Imovel(int tipoDeOferta, double valor, string cidade, string bairro,string logradouro,string cep,int numero)
{
	this->tipoDeOferta = tipoDeOferta;
	this->valor = valor;
	endereco = Endereco(cidade, bairro, logradouro, cep, numero);
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

