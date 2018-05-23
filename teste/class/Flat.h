#ifndef FLAT_H
#define FLAT_H

#include <string>
#include "Imovel.h"
using namespace std;

class Flat : public Imovel{
	private:
		double areaFlat;
	    double valorCondominio;
	    
	    char arCondicionado[20];
	    char internet[20];
	    char tvACabo[20];
	    char lavanderia[20];
	    char limpeza[20];
		char recepcao24[20];

	public:
		Flat();
		Flat(double areaFlat, double valorCondominio, char arCondicionado, char internet, char tvACabo,
			 char lavanderia, char limpeza, char recepcao24, int tipoDeImovel, int tipoDeOferta, double valor, string cidade,
			 string bairro,string logradouro,string cep,int numero);
		virtual ~Flat();


		//Metodos da classe
		string getDescricao();
		unsigned long int getTamanhoDaClasse(void);
};

#endif
