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

//set
void SistemaImobiliaria::setImoveis(std::list<Imovel*> imoveisRecuperados){
	this->meusImoveis = imoveisRecuperados;
}

//get
std::list <Imovel*> SistemaImobiliaria::getImovel(void){
	return meusImoveis;
}




std::list <Imovel*> SistemaImobiliaria::getDescricao(){
	Imovel *imovel;
	std::list <Imovel*>  lista;
	
	for(std::list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
		imovel = *it;
		lista.push_back(imovel);						
	}
	
	return lista;
}

std::list <Imovel*> SistemaImobiliaria::getDescricaoPorTipo(int tipoDeImovel){
	Imovel *imovel;
	std::list <Imovel*>  lista;

	for(std::list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
		imovel = *it;
		
		if(imovel->getTipoDeImovel() == tipoDeImovel){
			lista.push_back(imovel);
		}						
	}
	return lista;
}

std::list<Imovel*> SistemaImobiliaria::getDescricaoPorBairro(std::string bairro, int tipoOferta){
	Imovel *imovel;
	Endereco endereco;
	std::string tipoDeOferta;
	std::list<Imovel*> lista;

	if(tipoOferta == IMOVEL_PARA_VENDER){
		tipoDeOferta = "Vender";
	}else if(tipoOferta == IMOVEL_PARA_ALUGAR){
		tipoDeOferta = "Alugar";
	}else{
		tipoDeOferta = "Desconhecida";
	}

	for(std::list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
		imovel = *it;
		endereco = imovel->getEndereco();
		
		if(endereco.getBairro() == bairro &&(imovel->getTipoDeOferta() == tipoDeOferta)){
			lista.push_back(imovel);
		}
	}
	
	return lista;
}

std::list<Imovel*> SistemaImobiliaria::getDescricaoPorCidade(std::string cidade, int tipoDeImovel){
	Imovel *imovel;
	Endereco endereco;
	std::list<Imovel*> lista;

	if(tipoDeImovel == 0){//Pesquisa para todos os imóveis
		for(std::list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
			imovel = *it;
			endereco = imovel->getEndereco();
			
			if(endereco.getCidade() == cidade){
				lista.push_back(imovel);
			}	
		}	
	}else{//Pesquisa para tipo de imóveis específicos
		for(std::list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
			imovel = *it;
			endereco = imovel->getEndereco();
			
			if(endereco.getCidade() == cidade && imovel->getTipoDeImovel() == tipoDeImovel){
				lista.push_back(imovel);
			}	
		}
	}
	
	return lista;
}
std::list <Imovel*> SistemaImobiliaria::getDescricaoPorOferta(int tipoOferta){
	Imovel *imovel;
	Endereco endereco;
	std::string tipoDeOferta;
	std::list<Imovel*> lista;

	if(tipoOferta == IMOVEL_PARA_VENDER){
		tipoDeOferta = "Vender";
	}else if(tipoOferta == IMOVEL_PARA_ALUGAR){
		tipoDeOferta = "Alugar";
	}else{
		tipoDeOferta = "Desconhecida";
	}

	for(std::list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
		imovel = *it;
		endereco = imovel->getEndereco();
		
		if(imovel->getTipoDeOferta() == tipoDeOferta){
			lista.push_back(imovel);
		}
	}
	
	return lista;
}

