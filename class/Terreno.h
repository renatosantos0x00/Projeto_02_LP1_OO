#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"
#include <string>


class Terreno : public Imovel{
	private:
		double area;

	public:
		Terreno();
		Terreno(int tipoDeOferta, double valor, double area, std::string cidade, std::string bairro,std::string logradouro,std::string cep,int numero);
		virtual ~Terreno();

		double getArea();
		void setArea(double area);
		
		std::string getDescricao();
		int getTipoDeImovel(void);
		std::string getDescricaoCSV(void);

};

#endif
