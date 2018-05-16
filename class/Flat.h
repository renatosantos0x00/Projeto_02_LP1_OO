#ifndef FLAT_H
#define FLAT_H

#include <string>
#include "Imovel.h"

class Flat : public Imovel{
	private:
		double areaFlat;
	    double valorCondominio;
	    char arCondicionado;
	    char internet;
	    char tvACabo;
	    char lavanderia;
	    char limpeza;
		char recepcao24;

	public:
		Flat();
		Flat(double areaFlat, double valorCondominio, char arCondicionado, char internet, char tvACabo,
			 char lavanderia, char limpeza, char recepcao24, int tipoDeOferta, double valor, Endereco endereco);
		virtual ~Flat();
		std::string getDescricao();
};


#endif