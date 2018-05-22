#ifndef CASA_H
#define CASA_H
#include <string>

#include "Imovel.h" // Herda da classe abstrata imovel
using namespace std;
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
			double areaConstruida, int tipoDeImovel, int tipoDeOferta, double valor, string cidade,
			 string bairro,string logradouro,string cep,int numero);

		virtual~Casa();

	//Metodos da class

		virtual std::string getDescricao(void);

};

#endif
