#ifndef SISTEMAIMOBILIARIA_H 
#define SISTEMAIMOBILIARIA_H 
#include <list>

#include "Imovel.h" 

class SistemaImobiliaria{
	private:
		std::list <Imovel*> meusImoveis;

	public:
		SistemaImobiliaria();
		virtual~SistemaImobiliaria();

	//Metodos da classe;
		void cadastraImovel(Imovel *imovel);
		std::list <Imovel*> getImovel(void);
		std::list <Imovel*> getDescricao();
		std::list <Imovel*> getDescricaoPorBairro(std::string bairro, int tipoDeOferta);
		std::list <Imovel*> getDescricaoPorCidade(std::string cidade, int tipoDeImovel);
		std::list <Imovel*> getDescricaoPorTipo(int tipoDeImovel);
		std::list <Imovel*> getDescricaoPorOferta(int tipoOferta);
};

#endif
