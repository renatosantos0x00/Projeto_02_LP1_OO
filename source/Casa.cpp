#include "Casa.h"

//Contrutores e destrutores da classe
Casa::Casa():
	Imovel()
	
{
	tipoDeImovel = TIPO_CASA;
	numeroDePavimentos = 0;
	numeroDeQuartos = 0;
	areaDoTerreno = 0;
	areaConstruida = 0;

}

Casa::Casa(int numeroDePavimentos, int numeroDeQuartos, double areaDoTerreno,
			double areaConstruida, int tipoDeOferta, double valor, std::string cidade,
			 std::string bairro,std::string logradouro,std::string cep,int numero):
	Imovel(tipoDeOferta, valor, cidade, bairro, logradouro, cep, numero)
{

	tipoDeImovel = TIPO_CASA;
	this->numeroDePavimentos = numeroDePavimentos;
	this->numeroDeQuartos = numeroDeQuartos;
	this->areaDoTerreno = areaDoTerreno;
	this->areaConstruida = areaConstruida;

}


Casa::~Casa(){

}

//Metodos da classe

std::string Casa::getDescricao(void){
	std::string casa = 	"CASA \n\nNumero de Quartos: " + std::to_string(numeroDeQuartos) +
						"\nNumero de Pavimentos: " + std::to_string(numeroDePavimentos) +
						"\nArea do Terreno: " + std::to_string(areaDoTerreno) +
						"\nArea Construida: " + std::to_string(areaConstruida) +
						"\nTipo de oferta: " + tipoDeOferta +
						"\nValor do imovel: " + std::to_string(valor);

	return casa + endereco.getEndereco();


}

int Casa::getTipoDeImovel(void){
	return tipoDeImovel;
}


std::string Casa::getDescricaoCSV(void){

	return  "__Casa__;_valor_;"+std::to_string(valor)+";_tipoDeOferta_;"+tipoDeOferta+
			";_numeroDeQuartos_;"+std::to_string(numeroDeQuartos)+";_numeroDePavimentos_;"+std::to_string(numeroDePavimentos)+
			";_areaDoTerreno_;"+std::to_string(areaDoTerreno)+";_areaConstruida_;"
			 +std::to_string(areaConstruida)+";"+endereco.getEnderecoCSV();
	
}

void Casa::setDescricaoCSV(std::string *descricao){
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

	atributo = recuperaValorDeCelula(descricao, "_numeroDePavimentos_");
	this->numeroDePavimentos = std::stoi(atributo);
	
	atributo = recuperaValorDeCelula(descricao, "_numeroDeQuartos_");
	this->numeroDeQuartos = std::stoi(atributo);

	atributo = recuperaValorDeCelula(descricao , "_areaDoTerreno_");
	this->areaDoTerreno = std::stod(atributo);

	atributo = recuperaValorDeCelula(descricao, "_areaConstruida_");
	this->areaConstruida = std::stod(atributo);

}