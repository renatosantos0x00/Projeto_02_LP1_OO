#ifndef IMOVEL_H
#define IMOVEL_H
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
    	string tipoDeOferta;
    	double valor;
    	Endereco endereco;

    public:
    //Construtpres e Destrutores da classe
        Imovel();
        Imovel(int tipoDeOferta, double valor, string cidade, string bairro,string logradouro,string cep,int numero);

        virtual~Imovel(void);

    //Metodos da classe
        virtual string getDescricao(void) = 0; // retorna uma string de forma formatada a descrição da classse
        virtual int getTipoDeImovel(void) = 0; // 
        
        // Arquivo
        virtual string getDescricaoCSV(void) = 0; // retorna uma string em formato .csv de todos os 
                                                // atributos da classe que herda
        //virtual void setDescricaoCSV(string descricao) = 0; // recebe como parametro uma string no  formato .csv
                                                          // e atribui a todos os atributos da classe o conteudo
        
        virtual double getValor(void);
        virtual string getTipoDeOferta(void);
        virtual Endereco getEndereco(void);
};



#endif
