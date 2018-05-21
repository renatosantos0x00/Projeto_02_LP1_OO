#include "GerenteDePersistencia.h"

#include <iostream>
#include <fstream>
#include "../nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

GerenteDePersistencia::GerenteDePersistencia(){
    ifstream i("../dados/dados.json");
    json k;
    i >> k;
    cout << k["pos1"];

}

GerenteDePersistencia::~GerenteDePersistencia(){

}

void GerenteDePersistencia::salvaListaImoveis(json novaLista){
    ofstream arquivo("../dados/dados.json");

    arquivo << setw(4) << novaLista << endl;
}