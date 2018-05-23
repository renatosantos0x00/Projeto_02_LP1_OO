#include <iostream>
#include <list>

#define TIPO_TODOSIMOVEIS 0
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

					cin>>opcaoSubItem; //laço infinito se a opção não tiver correta
					
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
							cin>>val#include <iostream>
#include <list>

#define TIPO_TODOSIMOVEIS 0
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

			case 2://Consulta imoveis disponíveis por tipo
				interface.ExibeMenuSubItem2();
				cin>>opcaoSubItem;
						
				switch(opcaoSubItem){
					case 1:{//Todos os Imóveis
						interface.ExibeMenuSubSubItem2();
						cin >> opcaoSubItem;

						switch(opcaoSubItem){
							case 1: { // Casas disponíveis
								meusImoveis = imobiliaria.getDescricaoPorTipo(TIPO_CASA);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 2:{
								meusImoveis = imobiliaria.getDescricaoPorTipo(TIPO_APARTAMENTO);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 3:{
								meusImoveis = imobiliaria.getDescricaoPorTipo(TIPO_TERRENO);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 4:{
								meusImoveis = imobiliaria.getDescricaoPorTipo(TIPO_FLAT);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 5:{
								meusImoveis = imobiliaria.getDescricaoPorTipo(TIPO_STUDIO);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 6:{
								meusImoveis = imobiliaria.getDescricao();
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 7:{
								break;
							}
							default:{
								cout << "Opcao invalida" << endl;
							}
							if(opcaoSubItem == 7){
								break;
							}
						}

						break;
					}
					case 2:{//Imoveis disponíveis por cidade
						string cidade;
						interface.ExibeMenuSubSubItem2();
						cin >> opcaoSubItem;
						cout << "Digite a cidade em deseja procurar: ";
						cin >> cidade;

						switch(opcaoSubItem){
							case 1: { // Casas disponíveis
								meusImoveis = imobiliaria.getDescricaoPorCidade(cidade, TIPO_CASA);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 2:{
								meusImoveis = imobiliaria.getDescricaoPorCidade(cidade, TIPO_APARTAMENTO);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 3:{
								meusImoveis = imobiliaria.getDescricaoPorCidade(cidade, TIPO_TERRENO);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 4:{
								meusImoveis = imobiliaria.getDescricaoPorCidade(cidade, TIPO_FLAT);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 5:{
								meusImoveis = imobiliaria.getDescricaoPorCidade(cidade, TIPO_STUDIO);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 6:{
								meusImoveis = imobiliaria.getDescricaoPorCidade(cidade, TIPO_TODOSIMOVEIS);
								Imovel *imovel;

								for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
									imovel = *it;
									cout << imovel->getDescricao() << endl;							
								}
							}
							case 7:{
								break;
							}
							default:{
								cout << "Opcao invalida" << endl;
							}
							if(opcaoSubItem == 7){
								break;
							}
						}
						break;
					}
					case 3:{
						break;
					}				
					default:{
						cout << "Opcao invalida" << endl;
					}
				}
				
			case 3:{//Mostrar descrição de todos os imóveis
				meusImoveis = imobiliaria.getDescricao();
				Imovel *imovel;

				for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
					imovel = *it;
					cout << imovel->getDescricao() << endl;							
				}
				
				break;
			}
			case 4:{//Consultar imoveis disponiveis para venda por bairro
				interface.ExibeMenuSubItem4();
				cin >> bairro;

                meusImoveis = imobiliaria.getDescricaoPorBairro(bairro, IMOVEL_PARA_VENDER);
                
                Imovel *imovel;

                for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
                    imovel = *it;
                    cout << imovel->getDescricao() << endl;							
                }
			}
			
			case 5:{//Consultar imoveis disponíveis para alugar por bairro
				interface.ExibeMenuSubItem5();
				cin >> bairro;

                meusImoveis = imobiliaria.getDescricaoPorBairro(bairro, IMOVEL_PARA_ALUGAR);
                
                Imovel *imovel;

                for(list<Imovel*>::iterator  it = meusImoveis.begin(); it!=meusImoveis.end(); ++it){
                    imovel = *it;
                    cout << imovel->getDescricao() << endl;							
                }
			}

			case 6:{
				break;
			}

			default:{
				cout << "Opcao invalida." << endl;
				break;
			}
		}//Switch maior

		if(opcaoItem == 6) break;

	}


	return 0;
}
r;
						