#include <iostream>
#include <string>

#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento() : Imovel(){

	strcpy(this->posicao, "Nenhuma");
	this->valorCondominio = 0;
	this->vagasGaragem = 0;
	this->area = 0;
	this->andar = 0;


}

Apartamento::Apartamento(string posicao, int numeroDeQuartos, double valorCondominio,
                    	 int vagasGaragem, double area,int andar, int tipoDeImovel, int tipoDeOferta, 
						 double valor, string cidade, string bairro,string logradouro,
						 string cep,int numero) 
	: Imovel(tipoDeImovel, tipoDeOferta, valor, cidade, bairro, logradouro,cep,numero)

{
	//this->posicao = posicao;
	strcpy(this->posicao, posicao.c_str());
	this->numeroDeQuartos = numeroDeQuartos;
	this->valorCondominio = valorCondominio;
	this->vagasGaragem = vagasGaragem;
	this->area = area;
	this->andar = andar;
}

Apartamento::~Apartamento(){
}

//
string Apartamento::getDescricao(){
	string strPosicao = string(this->posicao);

	string apartamento = 	"APARTAMENTO \n\nPosicao: " + strPosicao +
							"\nNumero de quartos: " + to_string(numeroDeQuartos) + 
							"\nValor do condominio: " + to_string(valorCondominio) + 
							"\nVagas de garagem: " + to_string(vagasGaragem) + 
							"\nArea: " + to_string(area) + 
							"\nAndar: " + to_string(andar);

	return apartamento+endereco.getEndereco();
}
unsigned long int Apartamento::getTamanhoDaClasse(void){
	return sizeof(Apartamento);
}