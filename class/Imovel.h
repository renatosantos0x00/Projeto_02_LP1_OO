#ifndef IMOVEL_H
#define IMOVEL_H
#include <string.h>

#define IMOVEL_PARA_VENDER 1
#define IMOVEL_PARA_ALUGAR 2

#include "Endereco.h"
using namespace std;
// Classe imovel abstrata

class Imovel {

    protected:
    	string tipoDeOferta;
    	double valor;
    	Endereco endereco;

    public:
    //Construtpres e Destrutores da classe
        Imovel();
        Imovel(int tipoDeOferta, double valor, string cidade, string bairro,string logradouro,string cep,int numero);

        virtual~Imovel(void);

    //Metodos da classe
        virtual string getDescricao(void) = 0; //vitual puro,
                                                // a classe que herdar é obrigada a implementar


        virtual double getValor(void);
        virtual string getTipoDeOferta(void);
        virtual Endereco getEndereco(void);

};



#endif
