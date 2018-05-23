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

		if(imoveis->getTipoDeImovel() == TIPO_CASA){

			tamanho = imoveis->getTamanhoDaClasse();
			oCasa.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == TIPO_APARTAMENTO){
			tamanho = imoveis->getTamanhoDaClasse();
			oApartamento.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == TIPO_TERRENO){
			
			tamanho = imoveis->getTamanhoDaClasse();
			oTerreno.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == TIPO_FLAT){

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
	
	return 1;
}


//falta terminar

int GerenteDePersistencia::recuperaListaDeImoveis(void){
	unsigned long int tamanho=0;
	Imovel *imoveis;

	Casa *ptrCasa, casa;
	Apartamento *ptrApartamento, apartamento;
	Flat *ptrFlat, flat;
	Studio *ptrStudio, ;
	Terreno *ptrTerreno;

	iCasa.open("dados/casa.bin", ios::binary | ios::in);	
	iApartamento.open("dados/apartamento.bin", ios::binary | ios::in);
	iFlat.open("dados/flat.bin", ios::binary | ios::in);
	iStudio.open("dados/studio.bin", ios::binary | ios::in);
	iTerreno.open("dados/terreno.bin", ios::binary | ios::in);
	

	if(iCasa.is_open() && iApartamento.is_open() && iFlat.is_open() 
		&& iStudio.is_open() && iTerreno.is_open())
	{
		while(1){
			if(!iCasa.eof()){
				break;
			
			}

			
			iCasa.read( , );

		}
		
		while(1){

			if(!iApartamento.eof()){
				break;
			
			}





		}

		while(1){

			if(!iFlat.eof()){
				break;
			
			}





		}

		while(1){

			if(!iStudio.eof()){
				break;
			
			}





		}

		while(1){

			if(!iTerreno.eof()){
				break;
			
			}
			




		}


	}else{
	
		return -1;
	}

	return 1;
}



std::list<Imovel*> GerenteDePersistencia::getListaImoveis(void){
	return this->meusImoveis;
}