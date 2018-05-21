#include "GerenteDePersistencia.h"

#include "../nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

GerenteDePersistencia::GerenteDePersistencia(){
    ifstream this->lista("../dados/dados.json");
}

GerenteDePersistencia::~GerenteDePersistencia(){

}

void GerenteDePersistencia::salvaListaImoveis(json novaLista){
    ofstream arquivo("../dados/dados.json");

    arquivo << setw(4) << novaLista << endl;
}