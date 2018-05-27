#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include <string>

#include "Imovel.h" // Herda da classe abstrata imovel

class Apartamento : public Imovel{

	private:
		std::string posicao;
		int numeroDeQuartos;
		double valorCondominio;
		int vagasGaragem;
		double area;
		int andar;

	public:
	//Contrutores e destrutores da classe
		Apartamento();
		Apartamento(std::string posicao, int numeroDeQuartos, double valorCondominio,
					int vagasGaragem, double area,int andar, int tipoDeOferta, 
					double valor, std::string cidade, std::string bairro, 
					std::string logradouro, std::string cep, int numero);

		virtual ~Apartamento();
	
	//Metodos da classe
		std::string getDescricao();
		int getTipoDeImovel(void);
		std::string getDescricaoCSV(void);
		void setDescricaoCSV(std::string *descricao);
		


};



#endif
