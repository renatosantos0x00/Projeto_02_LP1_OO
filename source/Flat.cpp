#include <string>
#include "Flat.h"

Flat::Flat() : Imovel(){
	this->areaFlat = 0;
    this->valorCondominio = 0;
	this->arCondicionado = ' ';
	this->internet = ' ';
	this->tvACabo = ' ';
	this->lavanderia = ' ';
	this->limpeza = ' ';
	this->recepcao24 = ' ';
}

Flat::Flat(double areaFlat, double valorCondominio, char arCondicionado, char internet, char tvACabo,
		   char lavanderia, char limpeza, char recepcao24, int tipoDeOferta, double valor, Endereco endereco)
		   : Imovel(tipoDeOferta, valor, endereco){
	this->areaFlat = areaFlat;
    this->valorCondominio = valorCondominio;
    if(arCondicionado == 's' || arCondicionado 'S'){
    	this->arCondicionado = "sim"
    }
	this->arCondicionado = arCondicionado;
	this->internet = internet;
	this->tvACabo = tvACabo;
	this->lavanderia = lavanderia;
	this->limpeza = limpeza;
	this->recepcao24 = recepcao24;
}

Flat::~Flat(){
}

string Flat::getDescricao(){

}
