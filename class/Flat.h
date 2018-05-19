#ifndef FLAT_H
#define FLAT_H

#include <string>
#include "Imovel.h"

class Flat : public Imovel{
	private:
		double areaFlat;
	    double valorCondominio;
	    
	    std::string arCondicionado;
	    std::string internet;
	    std::string tvACabo;
	    std::string lavanderia;
	    std::string limpeza;
		std::string recepcao24;

	public:
		Flat();
		Flat(double areaFlat, double valorCondominio, char arCondicionado, char internet, char tvACabo,
			 char lavanderia, char limpeza, char recepcao24, int tipoDeOferta, double valor, Endereco endereco);
		virtual ~Flat();


		//Metodos da classe
		std::string getDescricao();
};


#endif