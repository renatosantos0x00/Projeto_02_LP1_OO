#include "GerenteDePersistencia.h"


GerenteDePersistencia::GerenteDePersistencia(){


}

GerenteDePersistencia::~GerenteDePersistencia(){

}

//Metodos da classe

int GerenteDePersistencia::salvaListaDeImoveis(std::list<Imovel*> salvarMeusImoveis){
	std::cout << std::endl << "Tamanhoooo " << salvarMeusImoveis.size() << std::endl;
	Imovel *imoveis;
	std::list<Imovel*>::iterator it;
	unsigned long int tamanho = 0;

	oCasa.open("dados/casa.bin", ios::binary | ios::out );	
	oApartamento.open("dados/apartamento.bin", ios::binary | ios::out );
	oFlat.open("dados/flat.bin", ios::binary | ios::out );
	oStudio.open("dados/studio.bin", ios::binary | ios::out );
	oTerreno.open("dados/terreno.bin", ios::binary | ios::out );
	
	/*
	if(oCasa.is_open() && oApartamento.is_open() && oFlat.is_open() 
		&& oStudio.is_open() && oTerreno.is_open()){

	}else{
		return -1;
	}
	*/
	for(it = salvarMeusImoveis.begin(); it != salvarMeusImoveis.end(); it++){
		imoveis = *it;
		
		if(imoveis->getTipoDeImovel() == 1){
			tamanho = sizeof(Casa);
			oCasa.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == 2){
			tamanho = sizeof(Apartamento);
			oApartamento.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == 3){
			tamanho = sizeof(Terreno);
			oTerreno.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == 4){
			tamanho = sizeof(Flat);
			oFlat.write((const char *)imoveis, tamanho);

		}else if(imoveis->getTipoDeImovel() == 5){
			tamanho = sizeof(Studio);
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

std::list<Imovel*> GerenteDePersistencia::recuperaListaDeImoveis(void){
	long tamanho = 0;
	std::list<Imovel*> listaRecuperada;
	Imovel *imovel;

	Casa *ptrCasa;
	Apartamento *ptrApartamento;
	Flat *ptrFlat;
	Studio *ptrStudio;
	Terreno *ptrTerreno;
	
	iApartamento.open("dados/apartamento.bin", ios::binary | ios::in);
	iFlat.open("dados/flat.bin", ios::binary | ios::in);
	iStudio.open("dados/studio.bin", ios::binary | ios::in);
	iTerreno.open("dados/terreno.bin", ios::binary | ios::in);
	iCasa.open("dados/casa.bin", ios::binary | ios::in);
	
/*
	if(iCasa.is_open() && iApartamento.is_open() && iFlat.is_open() 
		&& iStudio.is_open() && iTerreno.is_open())
	{

*/	;
		while(!iCasa.eof()){
			std::cout << "passei aq casa" << std::endl;
			

			tamanho = sizeof(Casa);
			imovel = new Casa();
				
			iCasa.read((char *)imovel, tamanho);
			//this->meusImoveis.push_back(ptrCasa);
			listaRecuperada.push_back(imovel);

		}

		while(1){

			if(!iApartamento.eof()){
				break;
			
			}

			tamanho = sizeof(Apartamento);
			ptrApartamento = new Apartamento();

			iApartamento.read((char *)ptrApartamento, tamanho);
			//this->meusImoveis.push_back(ptrApartamento);
			listaRecuperada.push_back(ptrApartamento);

		}

		while(1){

			if(!iFlat.eof()){
				break;
			
			}
	
			tamanho = sizeof(Flat);
			ptrFlat = new Flat();

			iFlat.read((char *)ptrFlat, tamanho);
			//this->meusImoveis.push_back(ptrFlat);
			listaRecuperada.push_back(ptrFlat);


		}

		while(1){

			if(!iStudio.eof()){
				break;
			
			}

			tamanho = sizeof(Studio);
			ptrStudio = new Studio();

			iStudio.read((char*)ptrStudio, tamanho);
			//this->meusImoveis.push_back(ptrStudio);
			listaRecuperada.push_back(ptrStudio);

		}

		while(1){
			std::cout << "passei aq terreno" << std::endl;
			if(iTerreno.eof()){
				break;
			
			}
			tamanho = sizeof(Terreno);
			ptrTerreno = new Terreno();
			
			iTerreno.read((char*)ptrTerreno, tamanho);
			//this->meusImoveis.push_back(ptrTerreno);
			listaRecuperada.push_back(ptrTerreno);
		}

/*
	}else{
	
		return -1;
	}
*/	

	iCasa.close();	
	iApartamento.close();
	iFlat.close();
	iStudio.close();
	iTerreno.close();
	std::cout << "Lista recuperada " << listaRecuperada.size() << std::endl;
	return listaRecuperada;
}
