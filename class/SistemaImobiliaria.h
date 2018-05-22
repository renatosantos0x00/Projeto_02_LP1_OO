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
		list <Imovel*> getDescricao();
		list <Imovel*> getDescricaoPorBairro(string bairro, int tipoDeOferta);
		list <Imovel*> getDescricaoPorCidade(string cidade, int tipoDeImovel);
		list <Imovel*> getDescricaoPorTipo(int tipoDemovel);
};

#endif
