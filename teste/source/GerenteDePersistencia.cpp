#include "GerenteDePersistencia.h"


GerenteDePersistencia::GerenteDePersistencia(){


}

GerenteDePersistencia::~GerenteDePersistencia(){

}

//Metodos da classe

int GerenteDePersistencia::salvaListaDeImoveis(std::list<Imovel*> salvarMeusImoveis){
	Imovel *imoveis;
	std::list<Imovel*>::iterator it;
	unsigned long int tamanho = 0;

	oCasa.open("dados/casa.bin", ios::binary | ios::out | ios::app);	
	oApartamento.open("dados/apartamento.bin", ios::binary | ios::out | ios::app);
	oFlat.open("dados/flat.bin", ios::binary | ios::out | ios::app);
	oStudio.open("dados/studio.bin", ios::binary | ios::out | ios::app);
	oTerreno.open("dados/terreno.bin", ios::binary | ios::out | ios::app);
	/*
	if(oCasa.is_open() && oApartamento.is_open() && oFlat.is_open() 
		&& oStudio.is_open() && oTerreno.is_open()){

	}else{
		return -1;
	}
	*/
	for(it = salvarMeusImoveis.begin(); it != salvarMeusImoveis.end(); it++){
		imoveis = *it;

		if(imoveis->getTipoDeImovel() == TIPO_CASA || 1){

			tamanho = imoveis->getTamanhoDaClasse();
			oCasa.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == TIPO_APARTAMENTO || 1){
			tamanho = imoveis->getTamanhoDaClasse();
			oApartamento.write((const char *)imoveis, tamanho);

		}else if(/*imoveis->getTipoDeImovel() == TIPO_TERRENO ||*/ 1){
			
			tamanho = imoveis->getTamanhoDaClasse();
			oTerreno.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == TIPO_FLAT || 1){

			tamanho = imoveis->getTamanhoDaClasse();
			oFlat.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == TIPO_STUDIO){

			tamanho = imoveis->getTamanhoDaClasse();
			oStudio.write((const char *)imoveis, tamanho);

		}


	}//fim do for que percorre  a lista

	oCasa.close();
	oApartamento.close();
	oFlat.close();
	oStudio.close();
	oTerreno.close();
}


//falta terminar

int GerenteDePersistencia::recuperaListaDeImoveis(void){
	unsigned long int tamanho=0;
	Imovel *imoveis;

	arquivoDeEntrada.open("dados/imoveis.bin", ios::binary | ios::in );

	if(!arquivoDeEntrada.is_open()){
		
		while(1){
			if(!arquivoDeEntrada.eof()){
				break;
			}

			//arquivoDeEntrada.read();

		}

	}else{
	
		return -1;
	}


}



std::list<Imovel*> GerenteDePersistencia::getListaImoveis(void){
	return this->meusImoveis;
}