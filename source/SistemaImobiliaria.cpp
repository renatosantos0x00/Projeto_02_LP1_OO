#include "SistemaImobiliaria.h"
#include <string>
#include <iostream>
using namespace std;
//SistemaImobiliaria::SistemaImobiliaria(){
//}

SistemaImobiliaria::~SistemaImobiliaria(){

}

void cadastraImovel(Imovel *imovel){
	cout<<"Indique o tipo de imovel que quer cadastrar:\n";
	cout<<"Digite 1 se for uma casa\n";
	cout<<"Digite 2 se for um apartamento\n";
	cout<<"Digite 3 se for um terreno\n";
	cout<<"Digite 4 se for um flat\n";
	cout<<"Digite 5 se for um studio\n";
	int a,numero,tipoDeOferta;
	string cidade, bairro, logradouro, cep;
	double valor;
	cin>>a;
	while(1){
		switch(a){
			case 1:{
				int numeroDePavimentos,numeroDeQuartos;
				double areaDoTerreno,areaConstruida;
				cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
				cin>>cidade;
				cout<<"Bairro: ";
				cin>>bairro;
				cout<<"Lougradouro: ";
				cin>>logradouro;
				cout<<"CEP: ";
				cin>>cep;
				cout<<"Numero: ";
				cin>>numero;
				cout<<"Valor do imovel: ";
				cin>>valor;
				cout<<"Se o imovel for para vender, digite 1, se for para alugar, digite 2: ";
				cin>>tipoDeOferta;
				cout<<"Agora com algumas informacoes extra, diga o numero de pavimentos da sua casa: ";
				cin>>numeroDePavimentos;
				cout<<"Numero de quarto: ";
				cin>>numeroDeQuartos;
				cout<<"Area total do terreno: ";
				cin>>areaDoTerreno;
				cout<<"Area construida: ";
				cin>>areaConstruida;
				cout<<"Obrigado!";
				imovel = new Casa(int numeroDePavimetos, int numeroDeQuartos, double areaDoTerrreno,
						 double areaConstruida, int tipoDeOferta, double valor, string cidade,
			 			 string bairro,string logradouro,string cep,int numero);
				break;
			}
			case(2):{
				string posicao;
				int numeroDeQuartos,vagasGaragem,andar;
				double valorCondominio,area;
				cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
				cin>>cidade;
				cout<<"Bairro: ";
				cin>>bairro;
				cout<<"Lougradouro: ";
				cin>>logradouro;
				cout<<"CEP: ";
				cin>>cep;
				cout<<"Numero: ";
				cin>>numero;
				cout<<"Valor do imovel: ";
				cin>>valor;
				cout<<"Se o imovel for para vender, digite 1, se for para alugar, digite 2: ";
				cin>>tipoDeOferta;
				cout<<"Agora algumas informacoes extras, indique a posicao do apartamento (norte, sul, leste, oeste): ";
				cin>>posicao;
				cout<<"Numero de quarto: ";
				cin>>numeroDeQuartos;
				cout<<"Area total do terreno: ";
				cin>>area;
				cout<<"Numero de vagas na garagem: ";
				cin>>vagasGaragem;
				cout<<"Qual o andar: ";
				cin>>andar;
				cout<<"Valor do condominio: ";
				cin>>valorCondominio;
				cout<<"Obrigado!";
				imovel = new Apartamento(string posicao, int numeroDeQuartos, double valorCondominio,
						 int vagasGaragem, double area,int andar, int tipoDeOferta, 
						 double valor, string cidade, string bairro, string logradouro,
						 string cep, int numero);
				break;
			}
			case 3:{
				double area;
				cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
				cin>>cidade;
				cout<<"Bairro: ";
				cin>>bairro;
				cout<<"Lougradouro: ";
				cin>>logradouro;
				cout<<"CEP: ";
				cin>>cep;
				cout<<"Numero: ";
				cin>>numero;
				cout<<"Valor do imovel: ";
				cin>>valor;
				cout<<"Se o imovel for para vender, digite 1, se for para alugar, digite 2: ";
				cin>>tipoDeOferta;
				cout<<"Area total do terreno: ";
				cin>>area;
				cout<<"Obrigado!";
				imovel = new Terreno(int tipoDeOferta, double valor, Endereco endereco, double area,
						 string cidade, string bairro,string logradouro,string cep,int numero);
				break;
			}
			case 4:{
				double areaFlat,valorCondominio;
	    		string arCondicionado,internet,tvACabo,lavanderia,limpeza,recepcao24;
	    		cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
				cin>>cidade;
				cout<<"Bairro: ";
				cin>>bairro;
				cout<<"Lougradouro: ";
				cin>>logradouro;
				cout<<"CEP: ";
				cin>>cep;
				cout<<"Numero: ";
				cin>>numero;
				cout<<"Valor do imovel: ";
				cin>>valor;
				cout<<"Se o imovel for para vender, digite 1, se for para alugar, digite 2: ";
				cin>>tipoDeOferta;
				cout<<"Area total do terreno: ";
				cin>>areaFlat;
				cout<<"Valor do condominio: ";
				cin>>valorCondominio;
				cout<<"Agora algumas informacoes extras, diga se tem ar condicionado (se sim: s, se nao: n): ";
				cin>>arCondicionado;
				cout<<"Internet?(se sim: s, se nao: n): ";
				cin>>internet;
				cout<<"TV a cabo?(se sim: s, se nao: n): ";
				cin>>tvACabo;
				cout<<"Lavandeiria?(se sim: s, se nao: n): ";
				cin>>lavanderia;
				cout<<"Limpeza?(se sim: s, se nao: n): ";
				cin>>limpeza;
				cout<<"Recepcao 24 horas?(se sim: s, se nao: n): ";
				cin>>recepcao24;
				cout<<"Obrigado!";
				imovel = new Flat(double areaFlat, double valorCondominio, char arCondicionado, char internet, char tvACabo,
			 			 char lavanderia, char limpeza, char recepcao24, int tipoDeOferta, double valor, string cidade,
			 			 string bairro,string logradouro,string cep,int numero);
			 	break;
			}
			case(5):{
				double areaFlat,valorCondominio;
	    		string arCondicionado,internet,tvACabo,lavanderia,limpeza,recepcao24,piscina,sauna,salaDeGinastica;
	    		cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
				cin>>cidade;
				cout<<"Bairro: ";
				cin>>bairro;
				cout<<"Lougradouro: ";
				cin>>logradouro;
				cout<<"CEP: ";
				cin>>cep;
				cout<<"Numero: ";
				cin>>numero;
				cout<<"Valor do imovel: ";
				cin>>valor;
				cout<<"Se o imovel for para vender, digite 1, se for para alugar, digite 2: ";
				cin>>tipoDeOferta;
				cout<<"Area total do terreno: ";
				cin>>areaFlat;
				cout<<"Valor do condominio: ";
				cin>>valorCondominio;
				cout<<"Agora algumas informacoes extras, diga se tem ar condicionado (se sim: s, se nao: n): ";
				cin>>arCondicionado;
				cout<<"Internet?(se sim: s, se nao: n): ";
				cin>>internet;
				cout<<"TV a cabo?(se sim: s, se nao: n): ";
				cin>>tvACabo;
				cout<<"Lavandeiria?(se sim: s, se nao: n): ";
				cin>>lavanderia;
				cout<<"Limpeza?(se sim: s, se nao: n): ";
				cin>>limpeza;
				cout<<"Recepcao 24 horas?(se sim: s, se nao: n): ";
				cin>>recepcao24;
				cout<<"Piscina?(se sim: s, se nao: n): ";
				cin>>piscina;
				cout<<"Sauna(se sim: s, se nao: n): ";
				cin>>sauna;
				cout<<"Sala de ginastica?(se sim: s, se nao: n): ";
				cin>>salaDeGinastica;
				cout<<"Obrigado!";
				imovel = new Studio(areaStudio, valorCondominio, arCondicionado, internet, tvACabo,
			 						lavanderia, limpeza, recepcao24, piscina, sauna, salaDeGinastica,
			  						tipoDeOferta, valor, cidade, bairro, logradouro, cep, numero);
			  	break;
			}
		}
		if(a==1 || a==2 || a==3 || a==4 || a==5){
			break;
		}
		cin>>a;
	}
}
