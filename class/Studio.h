#ifndef STUDIO_H
#define STUDIO_H
#include <string>
#include "Imovel.h"
using namespace std;
class Studio : public Imovel{
	private:
		double areaStudio;
	    double valorCondominio;
	    char arCondicionado;
	    char internet;
	    char tvACabo;
	    char lavanderia;
	    char limpeza;
		char recepcao24;
		char piscina;
		char sauna;
		char salaDeGinastica;

	public:
		Studio();
		Studio(double areaStudio, double valorCondominio, char arCondicionado, char internet, char tvACabo,
			 char lavanderia, char limpeza, char recepcao24, char piscina, char sauna, char salaDeGinastica,
			  int tipoDeOferta, double valor, Endereco endereco);
		virtual ~Studio();
		std::string getDescricao();
};


#endif

