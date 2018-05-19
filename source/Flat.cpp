#include <string>
#include "Flat.h"

Flat::Flat() : Imovel(){

	this->areaFlat = 0;
    this->valorCondominio = 0;

	this->arCondicionado = "";
	this->internet = "";
	this->tvACabo = "";
	this->lavanderia = "";
	this->limpeza = "";
	this->recepcao24 = "";
}

Flat::Flat(double areaFlat, double valorCondominio, char arCondicionado, char internet, char tvACabo,
		   char lavanderia, char limpeza, char recepcao24, int tipoDeOferta, double valor, Endereco endereco)	   
		   : Imovel(tipoDeOferta, valor, endereco){
	
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
                        "\nAr condiconado: "+arCondicionado+
                        "\nINternet: "+internet+
                        "\nTV a Cabo: "+tvACabo+
                        "\nLAvanderia: "+lavanderia+
                        "\nLimpeza: "+limpeza+
                        "\nRecepição 24 horas: "+recepcao24;

    return flat+getEndereco();
}
