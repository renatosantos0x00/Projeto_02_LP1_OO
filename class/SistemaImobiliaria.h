#ifndef SISTEMAIMOBILIARIA_H 
#define SISTEMAIMOBILIARIA_H 
#include <list>

#include "Imovel.h" 

class SistemaImobiliaria{
	private:
		list <Imovel*> meusImoveis;

	public:
		SistemaImobiliaria();
		virtual~SistemaImobiliaria();

	//Metodos da classe;
		void cadastraImovel(Imovel *imovel);
		list <Imovel*> getImovel(void);

};

#endif
