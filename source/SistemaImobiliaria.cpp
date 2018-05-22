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
	list <Imovel*>  lista;
	
	for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
		imovel = *it;
		lista.push_back(imovel);						
	}
	
	return lista;
}

list <Imovel*> SistemaImobiliaria::getDescricaoPorTipo(int tipoDeImovel){
	Imovel *imovel;
	list <Imovel*>  lista;

	for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
		imovel = *it;
		
		if(imovel->getTipoDeImovel() == tipoDeImovel){
			lista.push_back(imovel);
			cout <<"OPAAA"<<endl;
		}						
	}
	return lista;
}

list<Imovel*> SistemaImobiliaria::getDescricaoPorBairro(string bairro, int tipoOferta){
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
		imovel = *it;
		endereco = imovel->getEndereco();
		
		if(endereco.getBairro() == bairro &&(imovel->getTipoDeOferta() == tipoDeOferta)){
			lista.push_back(imovel);
		}
	}
	
	return lista;
}

list<Imovel*> SistemaImobiliaria::getDescricaoPorCidade(string cidade, int tipoDeImovel){
	Imovel *imovel;
	Endereco endereco;
	list<Imovel*> lista;


	if(tipoDeImovel == 0){//Pesquisa para todos os imóveis
		for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
			imovel = *it;
			endereco = imovel->getEndereco();
			
			if(endereco.getBairro() == cidade){
				lista.push_back(imovel);
			}	
		}	
	}else{//Pesquisa para tipo de imóveis específicos
		for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
			imovel = *it;
			endereco = imovel->getEndereco();
			
			if(endereco.getBairro() == cidade && imovel->getTipoDeImovel() == tipoDeImovel){
				lista.push_back(imovel);
			}	
		}
	}
	
	return lista;
}
