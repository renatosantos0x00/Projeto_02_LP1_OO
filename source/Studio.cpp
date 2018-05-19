#include <string>
#include "Studio.h"

Studio::Studio() : Imovel(){
    
	this->areaStudio = 0;
    this->valorCondominio = 0;

	this->arCondicionado = "";
	this->internet = "";
	this->tvACabo = "";
	this->lavanderia = "";
	this->limpeza = "";
	this->recepcao24 = "";
	this->piscina = "";
	this->sauna = "";
	this->salaDeGinastica = "";
}

Studio::Studio(double areaStudio, double valorCondominio, char arCondicionado, char internet, char tvACabo,
		   char lavanderia, char limpeza, char recepcao24, char piscina, char sauna, char salaDeGinastica, 
		   int tipoDeOferta, double valor, Endereco endereco)
		   : Imovel(tipoDeOferta, valor, endereco){

	this->areaStudio = areaStudio;
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

    //Piscina 
    if(piscina == 's' || piscina == 'S'){
    	this->piscina = "Sim Possui.";
    }else if(piscina == 'n' || piscina == 'N'){
    	this->piscina = "Nao Possui.";
    }else{
    	this->piscina = "Nenhum.";
    }
	//Sauna 
    if(sauna == 's' || sauna == 'S'){
    	this->sauna = "Sim Possui.";
    }else if(sauna == 'n' || sauna == 'N'){
    	this->sauna = "Nao Possui.";
    }else{
    	this->sauna = "Nenhum.";
    }
    //Sauna 
    if(salaDeGinastica == 's' || salaDeGinastica == 'S'){
    	this->salaDeGinastica = "Sim Possui.";
    }else if(salaDeGinastica == 'n' || salaDeGinastica == 'N'){
    	this->salaDeGinastica = "Nao Possui.";
    }else{
    	this->salaDeGinastica = "Nenhum.";
    }
        
}

Studio::~Studio(){
}

string Studio::getDescricao(){

	string studio = "STUDIO \n\nArea: " + to_string(areaStudio) + 
					"\nValor do condominio: " + to_string(valorCondominio) + 
					"\nAr condicionado: " + arCondicionado +  
					"\nInternet: " + internet + 
					"\nTV a cabo: " + tvACabo + 
					"\nLavandaria: " + lavanderia + 
					"\nLimpeza: " + limpeza + 
					"\nRecepção 24 horas: " + recepcao24+ 
					"\nPiscina: " + piscina + 
					"\nSauna: " + sauna + 
					"\nSala de ginastica: " + salaDeGinastica;

	return studio+getEndereco();

}
