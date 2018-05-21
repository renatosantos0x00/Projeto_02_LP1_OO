#include "SistemaImobiliaria.h"
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