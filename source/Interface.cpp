#include <stdio.h>
#include <iostream>

#include "Interface.h"

using namespace std;

void Interface::ExibeMenuItem(){
    printf("-------------------------------------------------\n");
    printf("Main Menu\n");
    printf("-------------------------------------------------\n");
    printf("1 - Cadastrar imovel\n");
    printf("2 - Consutar imoveis disponiveis \n");
    printf("3 - Consultar descricao de todos os imoveis\n");
    printf("4 - Consultar imoveis disponiveis para venda por bairro\n");
    printf("5 - Consutar imoveis disponíveis para alugar por bairro\n");
    printf("6 - Consutar imoveis disponiveis para vender\n");
    printf("7 - Consutar imoveis disponiveis para alugar \n");
    printf("8 - Sair\n");
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

void Interface::ExibeMenuSubItem3(){
    //Item imoveis disponiveis para alugar por bairro - 5
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para vender por bairro\n");
    printf("-------------------------------------------------\n");
    printf("Entre com o Bairro: ");
}

void Interface::ExibeMenuSubItem4(){
    //Item imoveis disponiveis para alugar por bairro - 5
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para alugar por bairro\n");
    printf("-------------------------------------------------\n");
    printf("Entre com o Bairro: ");
}

void Interface::ExibeMenuSubItem5(){
    //Item imoveis disponiveis para vendero - 6
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para vender\n");
    printf("-------------------------------------------------\n");
}

void Interface::ExibeMenuSubItem6(){
    // Item imoveis disponveis para aluguel - 7
    printf("-------------------------------------------------\n");
    printf("Menu de imoveis disponveis para aluguel\n");
    printf("-------------------------------------------------\n");
}

void Interface::Descricao(int tipoDescricao, string nomeLugar, int constant, SistemaImobiliaria imobiliaria){
    list <Imovel*> meusImoveis;
    Imovel *imovel;

    switch(tipoDescricao){
        case 0:
            meusImoveis = imobiliaria.getDescricao();
            break;
        case 1:
            meusImoveis = imobiliaria.getDescricaoPorTipo(constant);
            break;
        case 2: 
            meusImoveis = imobiliaria.getDescricaoPorOferta(constant);
            break;
        case 3:
            meusImoveis = imobiliaria.getDescricaoPorBairro(nomeLugar, constant);
            break;
        case 4:
            meusImoveis = imobiliaria.getDescricaoPorCidade(nomeLugar, constant);
            break;
        default:
            break;
    }
    
    for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
        imovel = *it;
        cout<< "--------------------------------------------------" <<endl;
        cout<<"Pressione Enter."<<endl;
        cin.get();
        cout << endl <<imovel->getDescricao() << endl;						
        cin.get();
        cout<< "--------------------------------------------------" <<endl;
        
    }
}

int Interface::Limpa(bool *opcaoInvalida, int opcaoInterface){
    int opcao;

    limpaTela();
    
    if(*opcaoInvalida) cout << "Opcao invalida!" << endl;
    *opcaoInvalida = false;
    
    switch(opcaoInterface){
        case 0:
            ExibeMenuItem();
            break;
        case 1:
            ExibeMenuSubItem1();
            break;
        case 2:
            ExibeMenuSubItem2();
            break;
        case 22:
            ExibeMenuSubSubItem2();
            break;
        case 3:
            ExibeMenuSubItem3();
            break;
        case 4:
            ExibeMenuSubItem4();
            break;
        case 5:
            ExibeMenuSubItem5();
            break;
        case 6:
            ExibeMenuSubItem6();
            break;
        default: 
            break;
    }

    if( (opcaoInterface >= 0 && opcaoInterface <= 2) || opcaoInterface == 22 ) cin >> opcao;
    return opcao;
}

#ifdef OS_Windows
    /* Codigo Windows */
    int Interface::limpaTela(){
        system("cls");
    }

#else
    /* Codigo GNU/Linux */
    int Interface::limpaTela(){
        system("clear");
    }

#endif


