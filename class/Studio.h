#ifndef STUDIO_H
#define STUDIO_H
#include <string>

#include "Imovel.h"

class Studio : public Imovel{
	private:
		double areaStudio;
	    double valorCondominio;
	    
	    std::string arCondicionado;
	    std::string internet;
	    std::string tvACabo;
	    std::string lavanderia;
	    std::string limpeza;
		std::string recepcao24;
		std::string piscina;
		std::string sauna;
		std::string salaDeGinastica;

	public:
		Studio();
		Studio(double areaStudio, double valorCondominio, char arCondicionado, char internet, char tvACabo,
			 char lavanderia, char limpeza, char recepcao24, char piscina, char sauna, char salaDeGinastica, 
			 int tipoDeOferta, double valor, std::string cidade, std::string bairro, std::string logradouro, std::string cep, int numero);
		virtual ~Studio();
		
		std::string getDescricao();
		int getTipoDeImovel(void);
		std::string getDescricaoCSV(void);
		void setDescricaoCSV(std::string *descricao);



};


#endif

