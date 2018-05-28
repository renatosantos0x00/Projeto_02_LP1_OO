#ifndef INTERFACE_H
#define INTERFACE_H

#include <string.h>

#include "SistemaImobiliaria.h"
#include "Imovel.h"

using namespace std;

class Interface {
    public:
        void ExibeMenuItem();

        void ExibeMenuSubItem1();

        void ExibeMenuSubItem2();

        void ExibeMenuSubSubItem2();

        void ExibeMenuSubItem3();

        void ExibeMenuSubItem4();
        
        void ExibeMenuSubItem5();
        
        void ExibeMenuSubItem6();

        int limpaTela();

        int Limpa(bool *opcaoInvalida, int opcaoInterface);

        void Descricao(int tipoDescricao, string nomeLugar, int constant, SistemaImobiliaria imobiliaria);
};

#endif
