#include <stdio.h>

#include "Interface.h"

void Interface::ExibeMenuItem(){
    printf("-------------------------------------------------\n");
    printf("Main Menu\n");
    printf("-------------------------------------------------\n");
    printf("1 - Cadastrar imovel\n");
    printf("2 - Consutar imoveis disponiveis para venda e aluguel \n");
    printf("3 - Consultar descricao de todos os imoveis\n");
    printf("4 - Consultar imoveis disponiveis para venda por bairro\n");
    printf("5 - Consutar imoveis disponíveis para alugar por bairro\n\n");
    printf("6 - Sair\n");
    printf("-------------------------------------------------\n");
    printf("Digite a opcao desejada: ");

}

void Interface::ExibeMenuSubItem1(){
    printf("-------------------------------------------------\n");
    printf("Menu Cadastro\n");
    printf("-------------------------------------------------\n");
    printf("1 - Cadastrar casa\n");
    printf("2 - Cadastrar apartamento\n");
    printf("3 - Cadastrar terreno\n");
    printf("4 - Cadastrar flat\n");
    printf("5 - Cadastrar studio\n\n");
    printf("6 - Voltar\n");
    printf("-------------------------------------------------\n");
    printf("Digite a opcao desejada: ");
}

void Interface::ExibeMenuSubItem2(){
    //Sub item consultar imoveis disponiveis - 2
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis\n");
    printf("-------------------------------------------------\n");
    printf("1 - Todos os imoveis\n");
    printf("2 - Pesquisar por cidade\n\n");
    printf("3 - Voltar\n");
    printf("-------------------------------------------------\n");
    printf("Digite a opcao desejada: ");
}

void Interface::ExibeMenuSubSubItem2(){
    //Sub item 2 de imoveis disponiveis
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis\n");
    printf("-------------------------------------------------\n");
    printf("1 - Casas disponveis\n");
    printf("2 - Apartamentos disponiveis\n");
    printf("3 - Terrenos disponveis\n");
    printf("4 - Flats disponiveis\n");
    printf("5 - Studio dispoiveis\n");
    printf("6 - Todos os tipos de imóveis disponíveis\n\n");
    printf("7 - Voltar\n");
    printf("-------------------------------------------------\n");
    printf("Digite a opcao desejada: ");
}

void Interface::ExibeMenuSubItem4(){
    // Item imoveis disponveis para venda - 4
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para venda\n");
    printf("-------------------------------------------------\n");
    printf("Digite a opcao desejada: ");
}

void Interface::ExibeMenuSubItem5(){
    //Item imoveis disponiveis para alugar - 5
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para alugar por bairro\n");
    printf("-------------------------------------------------\n");
}



