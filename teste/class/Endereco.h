#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
#include <string.h>

class Endereco {
    private:

    int numero;
    char cep[20];
    char cidade[50];
    char bairro[50];
    char logradouro[50];

    public:
    //Construtor  e destrutores
        Endereco();
        Endereco(std::string cidade, std::string bairro,
         std::string logradouro, std::string cep, int numero);

        virtual~Endereco();

    //Metodos get e set
    //SET
        void setNumero(int numero);
        void setCep(std::string cep);
        void setCidade(std::string cidade);
        void setBairro(std::string bairro);
        void setLogradouro(std::string logradouro);

    //GET

        int getNumero(void);
        std::string getCep(void);
        std::string getCidade(void);
        std::string getBairro(void);
        std::string getLogradouro(void);
    //Metodos da classe

        std::string getEndereco(void);
};

#endif