#include <string>

#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento() : Imovel(){

	tipoDeImovel = TIPO_APARTAMENTO;
	posicao = "";
	numeroDeQuartos = 0;
	valorCondominio = 0;
	vagasGaragem = 0;
	area = 0;
	andar = 0;


}

Apartamento::Apartamento(string posicao, int numeroDeQuartos, double valorCondominio,
                    	 int vagasGaragem, double area, int andar, int tipoDeOferta, 
						 double valor, string cidade, string bairro,string logradouro,
						 string cep,int numero) 
						 : Imovel(tipoDeOferta, valor, cidade, bairro, logradouro, cep, numero){
	
	tipoDeImovel = TIPO_APARTAMENTO;
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
							"\nAndar: " + to_string(andar) +
							"\nTipo de oferta: " + tipoDeOferta +
							"\nValor do imovel: " + std::to_string(valor);

	return apartamento+endereco.getEndereco();
}

int Apartamento::getTipoDeImovel(void){
	return tipoDeImovel;	
}