#ifndef STUDIO_H
#define STUDIO_H
#include <string>

#include "Imovel.h"
using namespace std;

class Studio : public Imovel{
	private:
		double areaStudio;
	    double valorCondominio;
	    
	    string arCondicionado;
	    string internet;
	    string tvACabo;
	    string lavanderia;
	    string limpeza;
		string recepcao24;
		string piscina;
		string sauna;
		string salaDeGinastica;

	public:
		Studio();
		Studio(double areaStudio, double valorCondominio, char arCondicionado, char internet, char tvACabo,
			 char lavanderia, char limpeza, char recepcao24, char piscina, char sauna, char salaDeGinastica,
			  int tipoDeOferta, double valor, Endereco endereco);
		virtual ~Studio();
		
		std::string getDescricao();
};


#endif

