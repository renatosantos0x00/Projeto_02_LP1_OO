#include "GerenteDePersistencia.h"

#include <fstream>
#include "../nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

GerenteDePersistencia::GerenteDePersistencia(){
    ifstream lista("../dados/dados.json");
}

GerenteDePersistencia::~GerenteDePersistencia(){

}

void GerenteDePersistencia::salvaListaImoveis(json novaLista){
    ofstream arquivo("../dados/dados.json");

    arquivo << setw(4) << novaLista << endl;
}