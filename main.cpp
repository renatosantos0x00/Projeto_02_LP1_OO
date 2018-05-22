#include <iostream>
#include <list>

#define TIPO_CASA 1
#define TIPO_APARTAMENTO 2
#define TIPO_TERRENO 3
#define TIPO_FLAT 4
#define TIPO_STUDIO 5

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

	int opcaoItem, opcaoSubItem,numero,tipoDeOferta, tipoDeImovel;
	double valor;
	string cidade, bairro, logradouro, cep;

	while(1){
		interface.ExibeMenuItem();

		cin >> opcaoItem;

		switch(opcaoItem){
			case 1://Cadastra imoveis
				while(1){
					interface.ExibeMenuSubItem1();

					cin>>opcaoSubItem;
					
					switch(opcaoSubItem){
						case 1:{
							tipoDeImovel = TIPO_CASA;
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
							cout<<"Obrigado!" << endl;

							imovel = new Casa(numeroDePavimentos, numeroDeQuartos, areaDoTerreno,
											areaConstruida, tipoDeImovel, tipoDeOferta, valor, cidade,
											bairro, logradouro, cep, numero);
							
							imobiliaria.cadastraImovel(imovel);

							break;
						}
						case 2:{
							tipoDeImovel = TIPO_APARTAMENTO;
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
							cout<<"Obrigado!" << endl;
							imovel = new Apartamento(posicao, numeroDeQuartos, valorCondominio,
													vagasGaragem, area, andar, tipoDeImovel, tipoDeOferta, 
													valor, cidade, bairro, logradouro,
													cep, numero);
							imobiliaria.cadastraImovel(imovel);
							break;
						}
						case 3:{
							tipoDeImovel = TIPO_TERRENO;
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
							cout<<"Obrigado!" << endl;
							imovel = new Terreno(tipoDeImovel, tipoDeOferta, valor, area,
												cidade, bairro, logradouro, cep, numero);
							imobiliaria.cadastraImovel(imovel);
							break;
						}
						case 4:{
							tipoDeImovel = TIPO_FLAT;
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
							cout<<"Obrigado!" << endl;
							imovel = new Flat(areaFlat, valorCondominio, arCondicionado, internet, tvACabo,
											lavanderia, limpeza, recepcao24, tipoDeImovel, tipoDeOferta, valor, cidade,
											bairro, logradouro, cep, numero);
							imobiliaria.cadastraImovel(imovel);
							break;
						}
						case 5:{
							tipoDeImovel = TIPO_STUDIO;
							string tipo;
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
							cout<<"Obrigado!" << endl;
							imovel = new Studio(areaStudio, valorCondominio, arCondicionado, internet, tvACabo,
												lavanderia, limpeza, recepcao24, piscina, sauna, salaDeGinastica,
												tipoDeImovel, tipoDeOferta, valor, cidade, bairro, logradouro, cep, numero);
							imobiliaria.cadastraImovel(imovel);
							break;
						}
						case 6:{
							break;
						}
						default:{
							cout << "Opcao invalida" << endl;
						}
					}

					//Fim do While
					if(opcaoSubItem == 6){
						break;
					} 
				}//Fim while case 1

				break;

			case 2://Consulta imoveis disponíveis
			interface.ExibeMenuSubItem2();
			cin>>opcaoSubItem;
					
			switch(opcaoSubItem){
				case 1:{ //Todos os Imóveis
					interface.ExibeMenuSubSubItem2();
					cin >> opcaoSubItem;

					switch(opcaoSubItem){
						case 1: { // Casas disponíveis
							meusImoveis = imobiliaria.getDescricaoPorTipo(1);

							Imovel *imovel;

							cout << meusImoveis.size() << endl;

							for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
								imovel = *it;
								cout << imovel->getDescricao() << endl;							
							}
						}
						case 2:{}
						case 3:{}
						case 4:{}
						case 5:{}
						case 6:{}
						case 7:{
							break;
						}
						default:{
							cout << "Opcao invalida" << endl;
						}
					}

					break;
				}
				case 2:{
					
					break;
				}
				case 3:{
					
					break;
				}
				
				default:{
					cout << "Opcao invalida" << endl;
				}
			}

			//Fim do While
			if(opcaoSubItem == 6){
				break;
			} 

		}//Switch maior

	}


	return 0;
}
