#ifndef CASA_H
#define CASA_H
#include <string>

#include "Imovel.h" // Herda da classe abstrata imovel


class Casa : public Imovel{

	private:
		int numeroDePavimentos;
		int numeroDeQuartos;
		double areaDoTerreno;
		double areaConstruida;


	public:
	//Contrutores e destrutores da classe

		Casa();
		Casa(int numeroDePavimentos, int numeroDeQuartos, double areaDoTerreno,
			double areaConstruida, int tipoDeOferta, double valor, std::string cidade,
			 std::string bairro, std::string logradouro, std::string cep, int numero);

		virtual~Casa();

	//Metodos da class

		virtual std::string getDescricao(void);
		int getTipoDeImovel(void);
		std::string getDescricaoCSV(void);
		void setDescricaoCSV(std::string *descricao);

};

#endif
