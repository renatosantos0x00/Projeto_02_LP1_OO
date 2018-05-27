#include <iostream>
#include <list>

#include "Casa.h"
#include "Apartamento.h"
#include "GerenteDePersistencia.h"

using namespace std;


int main(int argc, char const *argv[])
{
	list<Imovel*> l, l2;
	list<Imovel*>::iterator it;
	//

	Imovel *im2,*im, *im3;
	GerenteDePersistencia sys;

	//im3 = new Apartamento();
	//im = new Casa();

	//l.push_back(im);
	//l.push_back(im3);

	//cout<< "TAMNHO DE l: "<< l.size()<< endl;
	//cout<<"RETORNO DE SALVA LISTA: "<< sys.salvaListaDeImoveis(l) << endl;

	//im3 = new Apartamento();
	//im2 = new Casa();

	l2 = sys.recuperaListaDeImoveis();
	it = l2.begin();
	
	im = *it;

	cout << endl <<im->getDescricao()<<endl;
	it++;
	im = *it;

	cout << endl <<im->getDescricao()<<endl;
	
	it++;
	im = *it;
	cout << endl <<im->getDescricao()<<endl;


	return 0;
}