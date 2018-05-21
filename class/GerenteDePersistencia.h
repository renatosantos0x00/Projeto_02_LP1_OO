#ifndef GERENTEDEPERSISTENCIA_H
#define GERENTEDEPERSISTENCIA_H

#include "../nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

class GerenteDePersistencia {
    public:
        json lista;
        
    
        GerenteDePersistencia();
        virtual ~GerenteDePersistencia();

        json getLista();
        void setLista(json lista);
        
        void salvaListaImoveis(json novaLista);
};

#endif