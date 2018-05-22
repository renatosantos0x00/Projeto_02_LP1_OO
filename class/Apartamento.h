#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <string>
#include "Imovel.h" // Herda da classe abstrata imovel
using namespace std;
class Apartamento : public Imovel{

	private:
		string posicao;
		int numeroDeQuartos;
		double valorCondominio;
		int vagasGaragem;
		double area;
		int andar;

	public:
	//Contrutores e destrutores da classe
		Apartamento();
		Apartamento(string posicao, int numeroDeQuartos, double valorCondominio,
					int vagasGaragem, double area,int andar, int tipoDeImovel, 
					int tipoDeOferta, double valor, string cidade, string bairro, 
					string logradouro, string cep, int numero);

		virtual ~Apartamento();
		string getDescricao();
		unsigned long int getTamanhoDaClasse(void);
	//Metodos da classe
		


};



#endif
