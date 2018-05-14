#include <iostream>
#include <string>
#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento(){
}

Apartamento::Apartamento(string posicao, int numeroDeQuartos,
						double valorCondominio, int vagasGaragem, double area, int disponibilidadeAluguel, int disponibilidadeVenda,
        				int tipoDeOferta, double valor, Endereco endereco) : Imovel (disponibilidadeAluguel, disponibilidadeVenda,
        				tipoDeOferta, valor, endereco){
}