
#include <iostream>
#include <list>

#include "GerenteDePersistencia.h"
#include "Imovel.h"
#include "Casa.h"
#include "Terreno.h"

using namespace std;

int main(void){
	GerenteDePersistencia gp;
	
	list<Imovel*> meusImoveis;
	list<Imovel*>::iterator it;

	Imovel *im1, *im2, *im3, *im4, *ptrImoveis;
		
		im1 = new Casa(2, 2, 2, 2, 1, 2,1, "a", "b", "c", "d", 2);
		//int tipoDeImovel, int tipoDeOferta, double valor,
		//double area,string cidade, string bairro,string logradouro,string cep,int numero
		im2 = new Terreno(3, 1, 11, 22, "a", "a", "a", "a", 2222);
		im3 = new Casa(2, 2, 2, 2, 1, 2,1, "a", "b", "c", "d", 2);
		im4 = new Terreno(3, 1, 11, 22, "aaa", "aaaa", "aaa", "aaa", 2222);		
	
	list<Imovel*> l;
	l.push_back(im1);
	l.push_back(im2);
	l.push_back(im3);
	l.push_back(im4);


	cout<< "TAMANHO: "<<l.size()<<endl;
	//l.sort();
	cout<<"RETORNO:"<<gp.salvaListaDeImoveis(l)<<endl;
	
	//cout<<"RECUPERADO: "<< gp.recuperaListaDeImoveis() << endl;
	meusImoveis = gp.recuperaListaDeImoveis();
	cout<< "MEUS IMOVEIS: "<< meusImoveis.size() <<endl;

	for(Imovel *i: meusImoveis){
		cout<< endl;
		cout<< i->getDescricao() <<endl;						
	}
	
	return 0;
}
