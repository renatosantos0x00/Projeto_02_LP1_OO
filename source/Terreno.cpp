#include "imovel.h"
#include "Terreno.h"
#include <string>
using namespace std;
Terreno::Terreno():Imovel(){
	area = -1;
}
Terreno::Terreno(int disponibilidadeAluguel, int disponibilidadeVenda,int tipoDeOferta,double valor, Endereco endereco
				double area)
		:Imovel(int disponibilidadeAluguel, int disponibilidadeVenda,int tipoDeOferta,double valor, Endereco endereco){
			this->area = area;
		}
double Terreno::getArea(){
	return area;
}
Terreno::setArea(double area){
	this->area = area;
}
