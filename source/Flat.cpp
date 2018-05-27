#include "Flat.h"

Flat::Flat() : Imovel(){

    tipoDeImovel = TIPO_FLAT;
	this->areaFlat = 0;
    this->valorCondominio = 0;

	this->arCondicionado = "Nennhum";
	this->internet = "Nennhum";
	this->tvACabo = "Nennhum";
	this->lavanderia = "Nennhum";
	this->limpeza = "Nennhum";
	this->recepcao24 = "Nennhum";
}

Flat::Flat(double areaFlat, double valorCondominio, char arCondicionado, char internet, char tvACabo,
		   char lavanderia, char limpeza, char recepcao24, int tipoDeOferta, double valor,std::string cidade, 
		   std::string bairro,std::string logradouro,std::string cep,int numero)	   
		   : Imovel(tipoDeOferta, valor, cidade,  bairro, logradouro, cep, numero){
	
    tipoDeImovel = TIPO_FLAT;
	this->areaFlat = areaFlat;
    this->valorCondominio = valorCondominio;
    
    // Parametro é um caractere mas o atributo e uma string
    // Arcondicionado
    if(arCondicionado == 's' || arCondicionado == 'S'){
    	this->arCondicionado = "Sim Possui.";
    }else if(arCondicionado == 'n' || arCondicionado =='N'){
    	this->arCondicionado = "Nao Possui.";
    }else{
    	this->arCondicionado = "Nenhum.";
    }

    //Internet
    if(internet == 's' || internet == 'S'){
    	this->internet = "Sim Possui.";
    }else if(internet == 'n' || internet == 'N'){
    	this->internet = "Nao Possui.";
    }else{
    	this->internet = "Nenhum.";
    }
    // TV a Cabo
    if(tvACabo == 's' || tvACabo == 'S'){
    	this->tvACabo = "Sim Possui.";
    }else if(tvACabo == 'n' || tvACabo == 'N'){
    	this->tvACabo = "Nao Possui.";
    }else{
    	this->tvACabo = "Nenhum.";
    }
    //Lavanderia
    if(lavanderia == 's' || lavanderia == 'S'){
    	this->lavanderia = "Sim Possui.";
    }else if(lavanderia == 'n' || lavanderia == 'N'){
    	this->lavanderia = "Nao Possui.";
    }else{
    	this->lavanderia = "Nenhum.";
    }
    //Limpeza
    if(limpeza == 's' || limpeza == 'S'){
    	this->limpeza = "Sim Possui.";
    }else if(limpeza == 'n' || limpeza == 'N'){
    	this->limpeza = "Nao Possui.";
    }else{
    	this->limpeza = "Nenhum.";
    }
    //Recepição 
    if(recepcao24 == 's' || recepcao24 == 'S'){
    	this->recepcao24 = "Sim Possui.";
    }else if(recepcao24 == 'n' || recepcao24 == 'N'){
    	this->recepcao24 = "Nao Possui.";
    }else{
    	this->recepcao24 = "Nenhum.";
    }
}

Flat::~Flat(){
}

//Metodos Da Classe

std::string Flat::getDescricao(){
    std::string flat =  "FLAT\n\nArea: "+std::to_string(areaFlat)+
                    "\nValor do Condominio: "+ std::to_string(valorCondominio)+
                    "\nAr Condicionado: "+arCondicionado+
                    "\nInternet: "+internet+
                    "\nTV a Cabo: "+tvACabo+
                    "\nLavanderia: "+lavanderia+
                    "\nLimpeza: "+limpeza+
                    "\nRecepcao 24 horas: "+recepcao24 +
                    "\nTipo de oferta: " + tipoDeOferta +
					"\nValor do imovel: " + std::to_string(valor);

    return flat+endereco.getEndereco();

}

int Flat::getTipoDeImovel(void){
    return tipoDeImovel;
}

std::string Flat::getDescricaoCSV(void){
    return  "__Flat__;_valor_;"+std::to_string(valor)+";_tipoDeOferta_;"+tipoDeOferta+
            ";_areaFlat_;"+std::to_string(areaFlat)+";_valorCondominio_;"+std::to_string(valorCondominio)+
            ";_arCondicionado_;"+arCondicionado+";_internet_;"+internet+";_tvACabo_;"+tvACabo+
            ";_lavanderia_;"+lavanderia+";_limpeza_;"+limpeza+";_recepcao24_;"+recepcao24+
            ";"+endereco.getEnderecoCSV();

    
}

void Flat::setDescricaoCSV(std::string *descricao){
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

    atributo = recuperaValorDeCelula(descricao, "_areaFlat_");
    this->areaFlat = std::stod(atributo);
    
    atributo = recuperaValorDeCelula(descricao, "_valorCondominio_");
    this->valorCondominio = std::stod(atributo);

    this->arCondicionado = recuperaValorDeCelula(descricao, "_arCondicionado_");
    this->internet = recuperaValorDeCelula(descricao, "_internet_");
    this->tvACabo = recuperaValorDeCelula(descricao, "_tvACabo_");
    this->lavanderia = recuperaValorDeCelula(descricao, "_lavanderia_");
    this->limpeza = recuperaValorDeCelula(descricao, "_limpeza_");
    this->recepcao24 = recuperaValorDeCelula(descricao, "_recepcao24_");




}