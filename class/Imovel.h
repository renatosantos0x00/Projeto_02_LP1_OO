#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"


// Classe imovel deve ser abstrata

class Imovel {
    protected:
    	int disponibilidadeAluguel;
    	int disponibilidadeVenda;
    	int tipoDeOferta;
    	double valor;
    	Endereco enderecos;

    public:
    //Construtpres e Destrutores da classe
        Imovel();
        Imovel(int disponibilidadeAluguel, int disponibilidadeVenda,
        		int tipoDeOferta, double valor, Endereco enderecos
        		);

        virtual~Imovel();

    //Metodos da classe

};



#endif