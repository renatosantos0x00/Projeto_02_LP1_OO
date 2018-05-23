#include "Imovel.h"
using namespace std;
//Construtores e Destrutores da classe
Imovel::Imovel(){

	strcpy(this->tipoDeOferta, "-1");
	valor = -1;
	endereco = Endereco();

}
Imovel::Imovel(int tipoDeImovel, int tipoOferta, double valor, string cidade, 
			string bairro,string logradouro,string cep,int numero)
{
	this->tipoDeImovel = tipoDeImovel;
	//this->tipoDeOferta = tipoDeOferta;
	//string tipoDeOferta;	
	if(tipoOferta == IMOVEL_PARA_VENDER){
		strcpy(this->tipoDeOferta, "Alugar");

	}else if(tipoOferta == IMOVEL_PARA_ALUGAR){
		strcpy(this->tipoDeOferta, "Vender");
	}else{
		strcpy(this->tipoDeOferta, "Desconhecida");

	}

	this->valor = valor;
	endereco = Endereco(cidade, bairro, logradouro, cep, numero);
}


Imovel::~Imovel(void){

}

//Metodos da classe

double Imovel::getValor(void){
	return valor;

}
string Imovel::getTipoDeOferta(void){
	string strTipoDeOferta = string(this->tipoDeOferta);

	return strTipoDeOferta;

}

Endereco Imovel::getEndereco(void){
	return endereco;

}

int Imovel::getTipoDeImovel(void){
	return tipoDeImovel;
}