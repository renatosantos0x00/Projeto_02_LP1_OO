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

	arquivoDeSaida.open("dados/imoveis.bin", ios::binary | ios::out | ios::app);

	if(!arquivoDeSaida.is_open()){
		for(it = salvarMeusImoveis.begin(); it != salvarMeusImoveis.end(); it++){
			imoveis = *it;
			
			tamanho = imoveis->getTamanhoDaClasse();
			arquivoDeSaida.write((const char *)imoveis, tamanho);
		
		}

		//arquivoDeSaida.write((const char *)imoveis, tamanho);

		arquivoDeSaida.close();

	}else{
		return -1;
	}

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