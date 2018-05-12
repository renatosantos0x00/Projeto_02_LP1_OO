#include "Imovel.h"

//Construtores e Destrutores da classe
Imovel::Imovel(){
	disponibilidadeAluguel = -1;
	disponibilidadeVenda =  -1;
	tipoDeOferta = -1;
	valor = -1;
	enderecos = Endereco();

}
Imovel::Imovel(int disponibilidadeAluguel, int disponibilidadeVenda,
		int tipoDeOferta, double valor, Endereco enderecos
		)
{
	
	this->disponibilidadeVenda = disponibilidadeVenda;
	this->disponibilidadeAluguel =  disponibilidadeAluguel;
	this->tipoDeOferta = tipoDeOferta;
	this->valor = valor;
	this->enderecos = enderecos;

}


Imovel::~Imovel(){

}
