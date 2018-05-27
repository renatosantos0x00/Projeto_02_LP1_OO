#include "Apartamento.h"

Apartamento::Apartamento() : Imovel(){

	tipoDeImovel = TIPO_APARTAMENTO;
	posicao = "Nenhum";
	numeroDeQuartos = 0;
	valorCondominio = 0;
	vagasGaragem = 0;
	area = 0;
	andar = 0;


}

Apartamento::Apartamento(std::string posicao, int numeroDeQuartos, double valorCondominio,
                    	 int vagasGaragem, double area, int andar, int tipoDeOferta, 
						 double valor, std::string cidade, std::string bairro,std::string logradouro,
						 std::string cep,int numero) 
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

std::string Apartamento::getDescricao(){
	std::string apartamento = 	"APARTAMENTO \n\nPosicao: " + posicao +
							"\nNumero de quartos: " + std::to_string(numeroDeQuartos) + 
							"\nValor do condominio: " + std::to_string(valorCondominio) + 
							"\nVagas de garagem: " + std::to_string(vagasGaragem) + 
							"\nArea: " + std::to_string(area) + 
							"\nAndar: " + std::to_string(andar) +
							"\nTipo de oferta: " + tipoDeOferta +
							"\nValor do imovel: " + std::to_string(valor);

	return apartamento+endereco.getEndereco();
}

int Apartamento::getTipoDeImovel(void){
	return tipoDeImovel;	
}

std::string Apartamento::getDescricaoCSV(void){

	return "__Apartamento__;_valor_;"+std::to_string(valor)+";_tipoDeOferta_;"+tipoDeOferta+
			";_posicao_;"+posicao+";_numeroDeQuartos_;"+std::to_string(numeroDeQuartos)+";_valorCondominio_;"
			+std::to_string(valorCondominio)+";_vagasGaragem_;"+std::to_string(vagasGaragem)+";_area_;"+std::to_string(area)+
			";_andar_;"+std::to_string(andar)+";_valor_;"+std::to_string(valor)+";"+endereco.getEnderecoCSV();			


}

void Apartamento::setDescricaoCSV(std::string *descricao){
	std::string atributo, cep, cid, bai, log;
	int num=0;

	// Atributos de imovel
	atributo = recuperaValorDeCelula(descricao,"_valor_");
	this->valor = std::stod(atributo); 

	this->tipoDeOferta = recuperaValorDeCelula(descricao,"_tipoDeOferta_");
	
	//Endereco
	atributo = recuperaValorDeCelula(descricao,"_numero_");
	num = std::stoi(atributo);

	cep = recuperaValorDeCelula(descricao,"_cep_");
	cid = recuperaValorDeCelula(descricao,"_cidade_");
	bai = recuperaValorDeCelula(descricao,"_bairro_");
	log = recuperaValorDeCelula(descricao,"_logradouro_");

	endereco = Endereco(cid, bai, log, cep, num);

	//atributos especiais da classe
	
	this->posicao = recuperaValorDeCelula(descricao,"_posicao_");
	
	atributo = recuperaValorDeCelula(descricao,"_numeroDeQuartos_");
	this->numeroDeQuartos = std::stoi(atributo);
	
	atributo = recuperaValorDeCelula(descricao,"_valorCondominio_");
	this->valorCondominio = std::stod(atributo);
	
	atributo = recuperaValorDeCelula(descricao,"_vagasGaragem_");
	this->vagasGaragem = std::stoi(atributo);
	
	atributo = recuperaValorDeCelula(descricao,"_area_");
	this->area = std::stod(atributo);

	atributo = recuperaValorDeCelula(descricao,"_andar_");
	this->andar = std::stoi(atributo);

}

