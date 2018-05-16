#include <iostream>
#include <string>

#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento() : Imovel(){
}

Apartamento::Apartamento(string posicao, int numeroDeQuartos, double valorCondominio,
                    	 int vagasGaragem, double area, int tipoDeOferta, double valor, Endereco endereco) 
						 : Imovel(tipoDeOferta, valor, endereco){
	this->posicao = posicao;
	this->numeroDeQuartos = numeroDeQuartos;
	this->valorCondominio = valorCondominio;
	this->vagasGaragem = vagasGaragem;
	this->area = area;
}

Apartamento::~Apartamento(){
}

string Apartamento::getDescricao(){
	std::string apartamento = 	"APARTAMENTO \nPosicao: " + posicao + "\n" +
						"Numero de quartos: " + to_string(numeroDeQuartos) + "\n" +
						"Valor do condominio: " + to_string(valorCondominio) + "\n" +
						"Vagas de garagem: " + to_string(vagasGaragem) + "\n" +
						"Area: " + to_string(area) + "\n" +
						"ENDERECO\n";

	return apartamento+getEndereco();
}