#include <iostream>
#include <string>

#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento() : Imovel(){
}

Apartamento::Apartamento(string posicao, int numeroDeQuartos, double valorCondominio,
                    	 int vagasGaragem, double area,int andar, int tipoDeOferta, 
						 double valor, string cidade, string bairro,string logradouro,
						 string cep,int numero) 
						 : Imovel(tipoDeOferta, valor, cidade, bairro, logradouro,cep,numero){
	this->posicao = posicao;
	this->numeroDeQuartos = numeroDeQuartos;
	this->valorCondominio = valorCondominio;
	this->vagasGaragem = vagasGaragem;
	this->area = area;
	this->andar = andar;
}

Apartamento::~Apartamento(){
}

string Apartamento::getDescricao(){
	string apartamento = 	"APARTAMENTO \n\nPosicao: " + posicao +
							"\nNumero de quartos: " + to_string(numeroDeQuartos) + 
							"\nValor do condominio: " + to_string(valorCondominio) + 
							"\nVagas de garagem: " + to_string(vagasGaragem) + 
							"\nArea: " + to_string(area) + 
							"\nAndar: " + to_string(andar);

	return apartamento+endereco.getEndereco();
}
