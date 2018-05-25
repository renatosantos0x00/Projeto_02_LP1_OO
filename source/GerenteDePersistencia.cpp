#include "GerenteDePersistencia.h"


GerenteDePersistencia::GerenteDePersistencia(){

}

GerenteDePersistencia::~GerenteDePersistencia(){

}

//Metodos da classe

int GerenteDePersistencia::salvaListaDeImoveis(std::list<Imovel*> salvarMeusImoveis){
	Imovel *imovel;
	std::string descricaoCSV;
	std::list<Imovel*>::iterator it;

	arquivoDeSaida.open("dados/imoveis.csv", std::ios::out | std::ios::app); // proteger com try
	
	if(!arquivoDeSaida.is_open()){
		return -1;
	
	}else{
		
		for( it = salvarMeusImoveis.begin(); it != salvarMeusImoveis.end(); ++it){		
			imovel = *it;			
			descricaoCSV = imovel->getDescricaoCSV(); 

			arquivoDeSaida << descricaoCSV << std::endl; // coloca uma linha em formato .csv no arquivo e pula para a proxima
		}


	}

	arquivoDeSaida.close(); // fecha stream
	return 1 ; // sucesso
}


//falta terminar

std::list<Imovel*>  GerenteDePersistencia::recuperaListaDeImoveis(void){


}