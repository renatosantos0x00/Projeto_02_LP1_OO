#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include <string.h>

#define TIPO_TODOSIMOVEIS 0
#define TIPO_CASA 1
#define TIPO_APARTAMENTO 2
#define TIPO_TERRENO 3
#define TIPO_FLAT 4
#define TIPO_STUDIO 5

#define IMOVEL_PARA_VENDER 1
#define IMOVEL_PARA_ALUGAR 2

#include "Endereco.h"
using namespace std;
// Classe imovel abstrata

class Imovel {

    protected:
        int tipoDeImovel;
    	char tipoDeOferta[20];
    	double valor;
    	Endereco endereco;

    public:
    //Construtpres e Destrutores da classe
        Imovel();
        Imovel(int tipoDeImovel, int tipoDeOferta, double valor, string cidade, string bairro,string logradouro,string cep,int numero);

        virtual~Imovel(void);

    //Metodos da classe
        virtual string getDescricao(void) = 0; //vitual puro,
                                                // a classe que herdar é obrigada a implementar

        virtual unsigned long int getTamanhoDaClasse(void)=0; // retorna o tamnho da classe par usar em arquivos

        virtual double getValor(void);
        virtual string getTipoDeOferta(void);
        virtual Endereco getEndereco(void);
        virtual int getTipoDeImovel(void);


};



#endif
