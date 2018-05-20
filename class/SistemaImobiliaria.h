#ifndef SISTEMAIMOBILIARIA_H 
#define SISTEMAIMOBILIARIA_H 

#include "Imovel.h"

class SistemaImobiliaria{
	private:
		Imovel *imoveis[100];

	public:
		SistemaImobiliaria();
		virtual~SistemaImobiliaria();

	//Metodos da classe;
		void cadastraImovel(Imovel *imovel);

};

#endif