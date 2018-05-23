#include <string>
#include "Studio.h"

Studio::Studio() : Imovel(){
    
	this->areaStudio = 0;
    this->valorCondominio = 0;

    strcpy(this->arCondicionado , " ");
    strcpy(this->internet, " ");
    strcpy(this->tvACabo, " ");
    strcpy(this->lavanderia, " ");
    strcpy(this->limpeza, " ");
    strcpy(this->recepcao24, " ");
    strcpy(this->piscina, " ");
    strcpy(this->sauna, " ");     
    strcpy(this->salaDeGinastica, " ");

}

Studio::Studio(double areaStudio, double valorCondominio, char arCondicionado, char internet, char tvACabo,
		   char lavanderia, char limpeza, char recepcao24, char piscina, char sauna, char salaDeGinastica, 
		   int tipoDeImovel, int tipoDeOferta, double valor, string cidade, string bairro,string logradouro,string cep,int numero)
		   : Imovel(tipoDeImovel, tipoDeOferta, valor,  cidade,  bairro, logradouro, cep, numero){

	this->areaStudio = areaStudio;
    this->valorCondominio = valorCondominio;

    // Parametro  um caractere mas o atributo e uma string
    // Arcondicionado
    if(arCondicionado == 's' || arCondicionado == 'S'){

         strcpy(this->arCondicionado , "Sim Possui.");
    }else if(arCondicionado == 'n' || arCondicionado =='N'){
        strcpy(this->arCondicionado , "Nao Possui.");
        
    }else{
        strcpy(this->arCondicionado , "Nenhum.");

    }

    //Internet
    if(internet == 's' || internet == 'S'){

        strcpy(this->internet, "Sim Possui.");
    }else if(internet == 'n' || internet == 'N'){

        strcpy(this->internet, "Nao Possui.");
    }else{
        
        strcpy(this->internet, "Nenhum.");
    }
    // TV a Cabo
    if(tvACabo == 's' || tvACabo == 'S'){
        strcpy(this->tvACabo, "Sim Possui.");

    }else if(tvACabo == 'n' || tvACabo == 'N'){
        strcpy(this->tvACabo, "Nao Possui."); 

    }else{
        strcpy(this->tvACabo, "Nenhum."); 
    }
    //Lavanderia
    if(lavanderia == 's' || lavanderia == 'S'){
        strcpy(this->lavanderia, "Sim Possui.");
  
    }else if(lavanderia == 'n' || lavanderia == 'N'){
        strcpy(this->lavanderia, "Nao Possui.");

    }else{
        strcpy(this->lavanderia, "Nenhum.");

    }
    //Limpeza
    if(limpeza == 's' || limpeza == 'S'){
        strcpy(this->limpeza, "Sim Possui.");

    }else if(limpeza == 'n' || limpeza == 'N'){
        strcpy(this->limpeza, "Nao Possui.");

    }else{
        strcpy(this->limpeza, "Nenhum.");
    }
    //Recepição 
    if(recepcao24 == 's' || recepcao24 == 'S'){
       strcpy(this->recepcao24, "Sim Possui.");

    }else if(recepcao24 == 'n' || recepcao24 == 'N'){
        strcpy(this->recepcao24, "Nao Possui.");

    }else{
        strcpy(this->recepcao24, "Nenhum.");
  
    }
    
    //Piscina 
    if(piscina == 's' || piscina == 'S'){
        strcpy(this->piscina, "Sim Possui.");

    }else if(piscina == 'n' || piscina == 'N'){
        strcpy(this->piscina, "Nao Possui.");    	
   
    }else{
        strcpy(this->piscina, "Nenhum.");       

    }

	//Sauna 
    if(sauna == 's' || sauna == 'S'){
        strcpy(this->sauna, "Sim Possui.");   

    }else if(sauna == 'n' || sauna == 'N'){
        strcpy(this->sauna, "Nao Possui.");   

    }else{
    	strcpy(this->sauna, "Nenhum.");   
    }
    //Sala de Ginastica 
    
    if(salaDeGinastica == 's' || salaDeGinastica == 'S'){
        strcpy(this->salaDeGinastica, "Sim Possui.");

    }else if(salaDeGinastica == 'n' || salaDeGinastica == 'N'){
        strcpy(this->salaDeGinastica, "Nao Possui.");

    }else{
        strcpy(this->salaDeGinastica, "Nenhum.");

    }
        
}

Studio::~Studio(){
}

string Studio::getDescricao(){
    
    string strArCondicionado = string(this->arCondicionado);
    string strInternet = string(this->internet);
    string strTvACabo = string (this->tvACabo);
    string strLavanderia = string(this->lavanderia);
    string strLimpeza = string(this->limpeza);
    string strRecepcao24 = string(this->recepcao24);
    string strPiscina = string (this->piscina);
    string strSauna = string(this->sauna);
    string strSalaDeGinastica = string(this->salaDeGinastica);

    string studio =  "STUDIO\n\nArea: "+to_string(areaStudio)+
                    "\nValor do Condominio: "+ to_string(valorCondominio)+
                    "\nAr Condicionado: "+strArCondicionado+
                    "\nInternet: "+strInternet+
                    "\nTV a Cabo: "+strTvACabo+
                    "\nLavanderia: "+strLavanderia+
                    "\nLimpeza: "+strLimpeza+
                    "\nRecepcao 24 horas: "+strRecepcao24+				     
                    "\nPiscina: " + strPiscina + 
					"\nSauna: " + strSauna + 
					"\nSala de ginastica: " + strSalaDeGinastica;

	return studio+endereco.getEndereco();

}

unsigned long int Studio::getTamanhoDaClasse(void){
    return sizeof(Studio);
}
