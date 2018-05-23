#include <iostream>
#include <list>
#include "GerenteDePersistencia.h"
#include "Imovel.h"
#include "Casa.h"
#include "Terreno.h"

using namespace std;

int main(void){
	GerenteDePersistencia gp;
	
	Imovel *im1, *im2, *im3, *im4;
		im1 = new Casa();
		im2 = new Terreno();
		im3 = new Casa();
		im4 = new Terreno();		
	
	list<Imovel*> l;
	l.push_back(im1);
	l.push_back(im2);
	l.push_back(im3);
	l.push_back(im4);

	cout<< "TAMANHO: "<<l.size()<<endl;
	
	cout<<"RETORNO:"<<gp.salvaListaDeImoveis(l)<<endl;
	
	return 0;
}
