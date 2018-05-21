#ifdef GERENTEDEPERSISTENCIA_H
#define GERENTEDEPERSISTENCIA_H

#include "../nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

class GerenteDePersistencia {
    private:
        json lista;
        
    public:
        GerenteDePersistencia();
        virtual ~GerenteDePersistencia();
        
        void salvaListaImoveis(json novaLista);
};

#endif