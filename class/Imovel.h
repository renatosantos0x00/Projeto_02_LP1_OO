#ifndef IMOVEL_H
#define IMOVEL_H
#include <string.h>

#include "Endereco.h"

// Classe imovel abstrata

class Imovel {

    protected:
    	int disponibilidadeAluguel;
    	int disponibilidadeVenda;
    	int tipoDeOferta;
    	double valor;
    	Endereco endereco;

    public:
    //Construtpres e Destrutores da classe
        Imovel(void);
        Imovel(int disponibilidadeAluguel, int disponibilidadeVenda,
        		int tipoDeOferta, double valor, Endereco endereco
        		);
        virtual~Imovel(void);

    //Metodos da classe
        virtual std::string getDescricao(void) = 0; //vitual puro,
                                                    // a classe que herdar é obrigada a implementar

        virtual double getValor(void);
        virtual int getTipoDeOferta(void);
        virtual std::string getEndereco(void);


};



#endif