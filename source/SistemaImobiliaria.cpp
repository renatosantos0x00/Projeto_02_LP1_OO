#include "SistemaImobiliaria.h"
#include <list>
#include <string>
#include <iostream>
using namespace std;

SistemaImobiliaria::SistemaImobiliaria(){
}

SistemaImobiliaria::~SistemaImobiliaria(){

}

void SistemaImobiliaria::cadastraImovel(Imovel *imovel){
	meusImoveis.push_back(imovel);
}

list <Imovel*> SistemaImobiliaria::getImovel(void){
	return meusImoveis;
}

list <Imovel*> SistemaImobiliaria::getDescricao(){
	Imovel *imovel;
	for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
		imovel = *it;
		cout << imovel->getDescricao() << endl;							
	}
}

list<Imovel*> SistemaImobiliaria::getDescricaoBairro(string bairro, int tipoOferta){
	Imovel *imovel;
	Endereco endereco;
	string tipoDeOferta;
	list<Imovel*> lista;

	if(tipoOferta == IMOVEL_PARA_VENDER){
		tipoDeOferta = "Alugar";
	}else if(tipoOferta == IMOVEL_PARA_ALUGAR){
		tipoDeOferta = "Vender";
	}else{
		tipoDeOferta = "Desconhecida";
	}

	for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
		endereco = imovel->getEndereco();
		imovel = *it;
		
		if(endereco.getBairro() == bairro &&(imovel->getTipoDeOferta() == tipoDeOferta)){
			lista.push_back(imovel);
		}
	}
	return lista;
}

list<Imovel*> SistemaImobiliaria::getDescricaoCidade(string cidade){
	Imovel *imovel;
	Endereco endereco;
	list<Imovel*> lista;

	for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
		endereco = imovel->getEndereco();
		imovel = *it;
		
		if(endereco.getBairro() == cidade  ){
			lista.push_back(imovel);
		}	
	}
	
	return lista;
}
