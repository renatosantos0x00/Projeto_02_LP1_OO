#ifndef GERENTEDEPERSISTENCIA_H
#define GERENTEDEPERSISTENCIA_H

#include "SistemaImobiliaria.h"

using namespace std;

class GerenteDePersistencia {
    private:
        list<Imovel*> lista;
        
    public:
        GerenteDePersistencia();
        virtual ~GerenteDePersistencia();

        list getLista();
        void setLista(list lista);
        
        void salvaListaImoveis(lista novaLista);
};

#endif