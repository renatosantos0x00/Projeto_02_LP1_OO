#include "Imovel.h"

//Construtores e Destrutores da classe
Imovel::Imovel(){

	tipoDeImovel = 0;	
	tipoDeOferta = "Nenhum";
	valor = 0;
	endereco = Endereco();
}
Imovel::Imovel(int tipoOferta, double valor, std::string cidade, std::string bairro,std::string logradouro,std::string cep,int numero)
{
	this->tipoDeImovel = 0;
	this->tipoDeOferta = tipoDeOferta;
	std::string tipoDeOferta;
	
	if(tipoOferta == IMOVEL_PARA_VENDER){
		this->tipoDeOferta = "Alugar";
	}else if(tipoOferta == IMOVEL_PARA_ALUGAR){
		this->tipoDeOferta = "Vender";
	}else{
		this->tipoDeOferta = "Desconhecida";
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
std::string Imovel::getTipoDeOferta(void){
	return tipoDeOferta;

}

Endereco Imovel::getEndereco(void){
	return endereco;

}

std::string Imovel::recuperaValorDeCelula(const std::string *linhaCSV, std::string atributo){		
	std::string strAux;		
	size_t posicao = 0, final = 0;

	while(1){
		posicao = atributo.find_first_of(' '); // verifica de se o atrbuto tem espaço
		
		if(posicao == std::string::npos){ // se não tiver sai do while e continua o metodo
			posicao = 0;
			break;
		}else{
			atributo.erase(posicao, 1); // se tiver retira todos os espaços do atributo
		}

	}
	if(linhaCSV->find(atributo) == std::string::npos){ // verifica se o atributo contem na string linhaCSV
		return "-1"; // se não retorna  -1, que pode ser interpretado tanto como string ou um valor numerico
	
	}else{ // 

		posicao = (atributo.size()) + (linhaCSV->find(atributo)) + 1; /// recebe a localização do valor do atributo na linhaCSV
		strAux = linhaCSV->substr(posicao); // recorta a string a partir do valor do atributo
		final = strAux.find_first_of(';'); // encontra o fim da celula do valor do atributo
	}
	
	return strAux.substr(0, final); // retira o valor de atributo

}