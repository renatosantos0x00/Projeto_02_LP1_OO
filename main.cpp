#include <iostream>
#include <list>

#include "SistemaImobiliaria.h"
#include "Interface.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Flat.h"
#include "Studio.h"
#include "Terreno.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Interface interface;
	SistemaImobiliaria imobiliaria;
	Imovel *imovel;
	list <Imovel*> meusImoveis;
	int tamanho;


	tamanho = meusImoveis.size();
	cout << endl << tamanho << endl << endl;


    interface.ExibeMenuSubItem1();

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

				imovel = new Casa(numeroDePavimentos, numeroDeQuartos, areaDoTerreno,
						 		areaConstruida, tipoDeOferta, valor, cidade,
			 			 		bairro, logradouro, cep, numero);
				
				imobiliaria.cadastraImovel(imovel);

				
				break;
			}
			case 2:{
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
				imovel = new Apartamento(posicao, numeroDeQuartos, valorCondominio,
						 				vagasGaragem, area, andar, tipoDeOferta, 
						 				valor, cidade, bairro, logradouro,
						 				cep, numero);
				imobiliaria.cadastraImovel(imovel);
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
				imovel = new Terreno(tipoDeOferta, valor, area,
						 			cidade, bairro, logradouro, cep, numero);
				imobiliaria.cadastraImovel(imovel);
				break;
			}
			case 4:{
				double areaFlat,valorCondominio;
	    		char arCondicionado,internet,tvACabo,lavanderia,limpeza,recepcao24;
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
				imovel = new Flat(areaFlat, valorCondominio, arCondicionado, internet, tvACabo,
			 			 		lavanderia, limpeza, recepcao24, tipoDeOferta, valor, cidade,
			 			 		bairro, logradouro, cep, numero);
				imobiliaria.cadastraImovel(imovel);
			 	break;
			}
			case 5:{
				double areaStudio,valorCondominio;
	    		char arCondicionado,internet,tvACabo,lavanderia,limpeza,recepcao24,piscina,sauna,salaDeGinastica;
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
				cin>>areaStudio;
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
				imobiliaria.cadastraImovel(imovel);
			  	break;
			}
		
		}
			if(a==1 || a==2 || a==3 || a==4 || a==5){
						break;
					}
					cin>>a;
				}

	meusImoveis = imobiliaria.getImovel();

	cout << endl << meusImoveis.size()<< endl << endl;

	for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
	//it.getDescricao();
		imovel = *it;
		cout << imovel->getDescricao() << endl;							
	}

	return 0;
}
