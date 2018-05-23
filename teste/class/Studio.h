#ifndef STUDIO_H
#define STUDIO_H
#include <string>

#include "Imovel.h"
using namespace std;

class Studio : public Imovel{
	private:
		double areaStudio;
	    double valorCondominio;
	    
	    char arCondicionado[20];
	    char internet[20];
	    char tvACabo[20];
	    char lavanderia[20];
	    char limpeza[20];
		char recepcao24[20];
		char piscina[20];
		char sauna[20];
		char salaDeGinastica[20];

	public:
		Studio();
		Studio(double areaStudio, double valorCondominio, char arCondicionado, char internet, char tvACabo,
			 char lavanderia, char limpeza, char recepcao24, char piscina, char sauna, char salaDeGinastica,
			  int tipoDeImovel, int tipoDeOferta, double valor, string cidade, string bairro,string logradouro,string cep,int numero);
		virtual ~Studio();
		
		string getDescricao();
		unsigned long int getTamanhoDaClasse(void);
};


#endif

