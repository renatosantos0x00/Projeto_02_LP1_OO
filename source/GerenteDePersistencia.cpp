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

	arquivoDeSaida.open("dados/imoveis.csv", std::ios::out ); // proteger com try
	
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

std::list<Imovel*> GerenteDePersistencia::recuperaListaDeImoveis(void){

	std::list<Imovel*> imoveisRecuperados;
	Imovel *imovel;
	std::list<Imovel*>::iterator it;
	std::string linhaCSV, substring;
	size_t posicao=0;

	arquivoDeEntrada.open("dados/imoveis.csv", std::ios::in);

	if(!arquivoDeEntrada.is_open()){
		std::cout<<"error! ao abrir arquivo"<<std::endl;
	}else{
		
		while(!arquivoDeEntrada.eof()){

			getline(arquivoDeEntrada, linhaCSV);
			
			// Seleciona qual tipo de imovel, atraves do marcador do 
			// inicio de linha está armazenda no .csv

				posicao = linhaCSV.find_first_of(';'); // ler a primeira celula do csv
				substring = linhaCSV.substr(0, posicao); // recorta a informação da celula

				if(!substring.compare("__Casa__")){

					imovel = new Casa(); // aloca dinamicamente um objeto casa e retorna um ponteiro
					imovel->setDescricaoCSV(&linhaCSV); // chama o metodo virtual puro em Imovel que recupera informações no csv	
					imoveisRecuperados.push_back(imovel); // coloca o endereco atual na lista de  imoveis

				}else if(!substring.compare("__Apartamento__")){
	
					imovel = new Apartamento();
					imovel->setDescricaoCSV(&linhaCSV);
					imoveisRecuperados.push_back(imovel);
	
				}else if(!substring.compare("__Flat__")){

					imovel = new Flat();
					imovel->setDescricaoCSV(&linhaCSV);
					imoveisRecuperados.push_back(imovel);

				}else if(!substring.compare("__Studio__")){
					
					imovel = new Studio();
					imovel->setDescricaoCSV(&linhaCSV);
					imoveisRecuperados.push_back(imovel);


				}else if(!substring.compare("__Terreno__")){

					imovel = new Terreno();
					imovel->setDescricaoCSV(&linhaCSV);
					imoveisRecuperados.push_back(imovel);

				}
			//
		}
	}


	return imoveisRecuperados;
}