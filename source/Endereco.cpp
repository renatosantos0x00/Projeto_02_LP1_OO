#include "Endereco.h"

//Construtor  e destrutores

Endereco::Endereco(){

    numero = 0;
    cep = "";
    cidade = "";
    bairro = "";
    logradouro = "";

}

Endereco::Endereco(std::string cidade, std::string bairro,
    std::string logradouro, std::string cep, int numero)
{
    this->numero = numero;
    this->cep = cep;
    this->cidade = cidade;
    this->bairro = bairro;
    this->logradouro = logradouro;


}


Endereco::~Endereco(){

}

//Metodos get e set
//SET
void Endereco::setNumero(int numero){
    this->numero = numero;
}
void Endereco::setCep(std::string cep){
    this->cep = cep;
}

void Endereco::setCidade(std::string cidade){
    this->cidade = cidade;
}

void Endereco::setBairro(std::string bairro){
    this->bairro = bairro;
}

void Endereco::setLogradouro(std::string logradouro){
    this->logradouro = logradouro;
}

//GET

int Endereco::getNumero(void){
    return numero;
}
std::string Endereco::getCep(void){
    return cep;
}

std::string Endereco::getCidade(void){
    return cidade;
}
std::string Endereco::getBairro(void){
    return bairro;
}
std::string Endereco::getLogradouro(void){
    return logradouro;
}
