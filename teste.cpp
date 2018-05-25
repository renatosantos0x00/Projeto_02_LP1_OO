#include <iostream>
#include <list>

#include "Casa.h"
#include "GerenteDePersistencia.h"

using namespace std;


int main(int argc, char const *argv[])
{
	list<Imovel*> l;
	//

	Imovel *im = new Casa(2, 3, 43.2, 40, 1, 6500.0, "Conde", "bairro", "loggradouro", "583222-00", 213);
	GerenteDePersistencia sys;

	l.push_back(im);

	cout<< "TAMNHO DE l: "<< l.size()<< endl;
	cout<<"RETORNO DE SALVA LISTA: "<< sys.salvaListaDeImoveis(l) << endl;


	return 0;
}