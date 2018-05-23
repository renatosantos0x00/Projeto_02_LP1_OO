#include "Endereco.h"

//Construtor  e destrutores

Endereco::Endereco(){

    numero = 0;
    strcpy(this->cep, "Nenhum");
    strcpy(this->cidade, "Nenhum");
    strcpy(this->bairro, "Nenhum");
    strcpy(this->logradouro, "Nenhum");

}

Endereco::Endereco(std::string cidade, std::string bairro,
    std::string logradouro, std::string cep, int numero)
{
    
    this->numero = numero;
    strcpy(this->cep, cep.c_str());
    strcpy(this->cidade, cidade.c_str());
    strcpy(this->bairro, bairro.c_str());
    strcpy(this->logradouro, logradouro.c_str());

}

Endereco::~Endereco(){

}

//Metodos get e set
//SET
void Endereco::setNumero(int numero){
    this->numero = numero;
}
void Endereco::setCep(std::string cep){
    strcpy(this->cep, cep.c_str());
}

void Endereco::setCidade(std::string cidade){
     strcpy(this->cidade, cidade.c_str());
}

void Endereco::setBairro(std::string bairro){
    strcpy(this->bairro, bairro.c_str());
}

void Endereco::setLogradouro(std::string logradouro){
        strcpy(this->logradouro, logradouro.c_str());
}

//GET

int Endereco::getNumero(void){
    return numero;
}
std::string Endereco::getCep(void){
    std::string strCep = std::string(this->cep);

    return strCep;
}

std::string Endereco::getCidade(void){
    std::string strCidade = std::string(this->cidade);

    return strCidade;
}
std::string Endereco::getBairro(void){
    std::string strBairro = std::string(this->bairro);    

    return strBairro;
}
std::string Endereco::getLogradouro(void){
    std::string strLogradouro = std::string(this->logradouro);

    return strLogradouro;
}


// Metodos da classe

std::string Endereco::getEndereco(void){
    std::string strCep = std::string(this->cep);
    std::string strCidade = std::string(this->cidade);
    std::string strBairro = std::string(this->bairro);
    std::string strLogradouro = std::string(this->logradouro);

    return  "\n\nENDERECO\n\nCidade: " +strCidade+
            "\nBairro: " +strBairro+
            "\nLogradouro: " +strLogradouro+
            "\nCEP: " +strCep+
            "\nNumero: "+std::to_string(numero);
            
}
