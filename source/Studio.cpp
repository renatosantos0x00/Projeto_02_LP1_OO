#include <string>
#include "Studio.h"

Flat::Flat() : Imovel(){
	this->areaStudio = 0;
    this->valorCondominio = 0;
	this->arCondicionado = ' ';
	this->internet = ' ';
	this->tvACabo = ' ';
	this->lavanderia = ' ';
	this->limpeza = ' ';
	this->recepcao24 = ' ';
	this->piscina = ' ';
	this->sauna = ' ';
	this->salaDeGinastica = ' ';
}

Flat::Flat(double areaStudio, double valorCondominio, char arCondicionado, char internet, char tvACabo,
		   char lavanderia, char limpeza, char recepcao24, char piscina, char sauna, char salaDeGinastica, 
		   int tipoDeOferta, double valor, Endereco endereco)
		   : Imovel(tipoDeOferta, valor, endereco){
	this->areaStudio = areaStudio;
    this->valorCondominio = valorCondominio;
	this->arCondicionado = arCondicionado;
	this->internet = internet;
	this->tvACabo = tvACabo;
	this->lavanderia = lavanderia;
	this->limpeza = limpeza;
	this->recepcao24 = recepcao24;
	this->piscina = piscina;
	this->sauna = sauna;
	this->salaDeGinastica;
}

Studio::~Studio(){
}

string Studio::getDescricao(){
	string studio = "STUDIO \nArea: " + to_string(areaStudio) + "\n" +
					"Valor do condominio: " + to_string(valorCondominio) + "\n" +
					"Ar condicionado: " + (1,arCondicionado) + "\n" +
					"Internet: " + (1,internet) + "\n" +
					"TV a cabo: " + (1,tvACabo) + "\n" +
					"Lavandaria: " + (1,lavanderia) + "\n" +
					"Limpeza: " + (1,limpeza) + "\n" +
					"Recepção 24 horas: " + (1,recepcao24) + "\n" +
					"Piscina: " + (1,piscina) + "\n" +
					"Sauna: " + (1,sauna) + "\n" +
					"Sala de ginastica: " + (1,salaDeGinastica) + "\n" +
					"ENDERECO\n";

	return studio+getEndereco();

}
