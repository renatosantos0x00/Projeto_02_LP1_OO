#ifndef CASA_H
#define CASA_H
#include <string>

#include "Imovel.h" // Herda da classe abstrata imovel

class Casa : public Imovel{

	private:
		int numeroDePavimetos;
		int numeroDeQuartos;
		double areaDoTerrreno;
		double areaConstruida;


	public:
	//Contrutores e destrutores da classe
		Casa();
		Casa(int numeroDePavimetos, int numeroDeQuartos,
				double areaDoTerrreno, double areaConstruida, int disponibilidadeAluguel, int disponibilidadeVenda,
        		int tipoDeOferta, double valor, Endereco endereco
        		);

		virtual~Casa();

	//Metodos da class

		virtual std::string getDescricao(void);



};



#endif