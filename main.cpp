#include <iostream>
#include <list>
#include <string>

#include "GerenteDePersistencia.h"
#include "SistemaImobiliaria.h"
#include "Interface.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Flat.h"
#include "Studio.h"
#include "Terreno.h"

#define NENHUM -1

using namespace std;

int main(int argc, char const *argv[]){

    //Ponteiros
	list <Imovel*> imoveisParaSalvar;
	list <Imovel*> imoveisRecuperados;
	list <Imovel*> meusImoveis;
    Imovel *imovel;
    
    //Objetos
	Interface interface;
	SistemaImobiliaria imobiliaria;
	GerenteDePersistencia arquivo;

    //Tipos 
	size_t numImoveisNovos = 0;
	int opcaoItem, opcaoSubItem, numero, tipoDeOferta, sair = 0; 
    bool opcaoInvalida = false;
	double valor;
    string posicao;

    //Tipos Cadastro
    string cidade, bairro, logradouro, cep, tipo, nenhum = " ";
    int numeroDePavimentos, numeroDeQuartos, vagasGaragem, andar;
	double areaDoTerreno, areaConstruida, valorCondominio, area;
    char arCondicionado, internet, tvACabo, lavanderia, limpeza, recepcao24, piscina, sauna, salaDeGinastica;

	imoveisRecuperados = arquivo.recuperaListaDeImoveis(); // coloca na lista todos os imoveis que está no arquivo
	numImoveisNovos = imoveisRecuperados.size();
	imobiliaria.setImoveis(imoveisRecuperados); // seta pra imobiliaria os imovies recuperdos
    

    while(1){
       opcaoItem = interface.Limpa(&opcaoInvalida, 0);
       
        switch(opcaoItem){
            case 1:// Cadastrar imóveis
                while(1){
                    opcaoSubItem = interface.Limpa(&opcaoInvalida, 1);

                    switch(opcaoSubItem){
                        case 1:
							cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
							getchar();
							getline(cin, cidade);
							
							cout<<"Bairro: ";
							getline(cin, bairro);
							
							cout<<"Logradouro: ";
							getline(cin, logradouro);
							
							cout<<"CEP: ";
							cin >> cep;

							cout<<"Numero: ";
							cin>>numero;

							cout<<"Valor do imovel: ";
							cin>>valor;

							cout<<"Se o imovel for para alugar, digite 1, se for para vender, digite 2: ";
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
											areaConstruida, tipoDeOferta, valor, cidade,
											bairro, logradouro, cep, numero);
							
							imobiliaria.cadastraImovel(imovel);

							break;
                        case 2:
							cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
							getchar();
							getline(cin, cidade);
							
							cout<<"Bairro: ";
							getchar();
							getline(cin, bairro);
							
							cout<<"Logradouro: ";
							getchar();
							getline(cin, logradouro);
							
							cout<<"CEP: ";
							cin >> cep;

							cout<<"Numero: ";
							cin>>numero;

							cout<<"Valor do imovel: ";
							cin>>valor;

							cout<<"Se o imovel for para alugar, digite 1, se for para vender, digite 2: ";
							cin>>tipoDeOferta;
							
							cout<<"Agora algumas informacoes extras, indique a posicao do apartamento (norte, sul, leste, oeste): ";
							getchar();
							getline(cin, posicao);

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
													vagasGaragem, area, andar, tipoDeOferta, 
													valor, cidade, bairro, logradouro,
													cep, numero);

							imobiliaria.cadastraImovel(imovel);
                            
							break;
                        case 3:
							cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
							getchar();
							getline(cin, cidade);
							
							cout<<"Bairro: ";
							getchar();
							getline(cin, bairro);
							
							cout<<"Logradouro: ";
							getchar();
							getline(cin, logradouro);
							
							cout<<"CEP: ";
							cin >> cep;

							cout<<"Numero: ";
							cin>>numero;

							cout<<"Valor do imovel: ";
							cin>>valor;

							cout<<"Se o imovel for para alugar, digite 1, se for para vender, digite 2: ";
							cin>>tipoDeOferta;

							cout<<"Area total do terreno: ";
							cin>>area;

							cout<<"Obrigado!" << endl;

							imovel = new Terreno(tipoDeOferta, valor, area,
												cidade, bairro, logradouro, cep, numero);
							imobiliaria.cadastraImovel(imovel);

							break;
                        case 4:
							cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
							getchar();
							getline(cin, cidade);
							
							cout<<"Bairro: ";
							getchar();
							getline(cin, bairro);
							
							cout<<"Logradouro: ";
							getchar();
							getline(cin, logradouro);
							
							cout<<"CEP: ";
							cin >> cep;

							cout<<"Numero: ";
							cin>>numero;

							cout<<"Valor do imovel: ";
							cin>>valor;

							cout<<"Se o imovel for para alugar, digite 1, se for para vender, digite 2: ";
							cin>>tipoDeOferta;

							cout<<"Area total do terreno: ";
							cin>>area;

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

							imovel = new Flat(area, valorCondominio, arCondicionado, internet, tvACabo,
											lavanderia, limpeza, recepcao24, tipoDeOferta, valor, cidade,
											bairro, logradouro, cep, numero);

							imobiliaria.cadastraImovel(imovel);

							break;
                        case 5:
							cout<<"Indique o endereco do seu imovel, primeiramente a cidade: ";
							getchar();
							getline(cin, cidade);
							
							cout<<"Bairro: ";
							getchar();
							getline(cin, bairro);
							
							cout<<"Logradouro: ";
							getchar();
							getline(cin, logradouro);
							
							cout<<"CEP: ";
							cin >> cep;

							cout<<"Numero: ";
							cin>>numero;

							cout<<"Valor do imovel: ";
							cin>>valor;

							cout<<"Se o imovel for para alugar, digite 1, se for para vender, digite 2: ";
							cin>>tipoDeOferta;

							cout<<"Area total do terreno: ";
							cin>>area;

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

							imovel = new Studio(area, valorCondominio, arCondicionado, internet, tvACabo,
												lavanderia, limpeza, recepcao24, piscina, sauna, salaDeGinastica, 
												tipoDeOferta, valor, cidade, bairro, logradouro, cep, numero);
							imobiliaria.cadastraImovel(imovel);

							break;
                        case 6:
                            break;
                        default:
                            opcaoInvalida = true;
                    }// Fim Switch
                    if(opcaoSubItem == 6) break;
                }// Fim While
                break;
            case 2:// Consultar imóveis disponíveis por tipo
                while(1){
                    opcaoSubItem = interface.Limpa(&opcaoInvalida, 2);

                    switch(opcaoSubItem){
                        case 1:
                            while(1){
								opcaoSubItem = interface.Limpa(&opcaoInvalida, 22);
								if(opcaoSubItem == 7) break;

								switch(opcaoSubItem){
									case 1:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(1, nenhum, TIPO_CASA, imobiliaria);
										break;
									case 2:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(1, nenhum, TIPO_APARTAMENTO, imobiliaria);
										break;
									case 3:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(1, nenhum, TIPO_TERRENO, imobiliaria);
										break;
									case 4:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(1, nenhum, TIPO_FLAT, imobiliaria);
										break;
									case 5:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(1, nenhum, TIPO_STUDIO, imobiliaria);
										break;
									case 6:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(0, nenhum, NENHUM, imobiliaria);
										break;
									case 7:
										break;
									default:
										opcaoInvalida = 1;
								}// Fim Switch

								cout << "Digite '0' para sair: ";
								cin >> sair;

								if(!sair) break;
							}// Fim While
                            break;
                        case 2:
							while(1){
								opcaoSubItem = interface.Limpa(&opcaoInvalida, 22);
								if(opcaoSubItem == 7) break;

								cout << "Digite a cidade que deseja procurar: ";
								getchar(); // Casas disponíveis
								getline(cin, cidade);

								switch(opcaoSubItem){
									case 1:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(4, cidade, TIPO_CASA, imobiliaria);
										break;
									case 2:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(4, cidade, TIPO_APARTAMENTO, imobiliaria);
										break;
									case 3:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(4, cidade, TIPO_TERRENO, imobiliaria);
										break;
									case 4:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(4, cidade, TIPO_FLAT, imobiliaria);
										break;
									case 5:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(4, cidade, TIPO_STUDIO, imobiliaria);
										break;
									case 6:
										interface.Limpa(&opcaoInvalida, -1);
										interface.Descricao(4, cidade, TIPO_TODOSIMOVEIS, imobiliaria);
										break;
									case 7:
										break;
									default:
										opcaoInvalida = 1;
								}// Fim Switch

								cout << "Digite '0' para sair: ";
								cin >> sair;

								if(!sair) break;
							}// Fim While
                        	break;
                        case 3:
                            break;
                        default:
                            opcaoInvalida = 1;
                    }// Fim Switch
                    if(opcaoSubItem == 3) break;
                }// Fim While
                break;
            case 3:// Mostrar descrição de todos os imóveis
				while(1){
					interface.Limpa(&opcaoInvalida, -1);
					interface.Descricao(0, nenhum, NENHUM, imobiliaria);

					cout << "Digite '0' para sair: ";
					cin >> sair;

					if(!sair) break;
				}
                break;
            case 4:// Consultar imoveis disponiveis para venda por bairro
				while(1){
					interface.Limpa(&opcaoInvalida, 3);
					getchar();
					getline(cin, bairro);

					interface.Descricao(3, bairro, IMOVEL_PARA_VENDER, imobiliaria);

					cout << "Digite '0' para sair: ";
					cin >> sair;

					if(!sair) break;
				}
                break;
            case 5:
				while(1){
					interface.Limpa(&opcaoInvalida, 4);
					getchar();
					getline(cin, bairro);
					
					interface.Descricao(3, bairro, IMOVEL_PARA_ALUGAR, imobiliaria);

					cout << "Digite '0' para sair: ";
					cin >> sair;

					if(!sair) break;
				}
                break;
            case 6:
				while(1){
					interface.Limpa(&opcaoInvalida, 5);
					
					interface.Descricao(2, nenhum, IMOVEL_PARA_VENDER, imobiliaria);

					cout << "Digite '0' para sair: ";
					cin >> sair;

					if(!sair) break;
				}
                break;
            case 7:
				while(1){
					interface.Limpa(&opcaoInvalida, 6);
					
					interface.Descricao(2, nenhum, IMOVEL_PARA_ALUGAR, imobiliaria);

					cout << "Digite '0' para sair: ";
					cin >> sair;

					if(!sair) break;
				}
                break;
            case 8:
                break;
            default:
                opcaoInvalida = true;
        } // Fim Switch
        if(opcaoItem == 8){

			imoveisParaSalvar = imobiliaria.getImovel();		
			
			if(numImoveisNovos !=  imoveisParaSalvar.size()){

				arquivo.salvaListaDeImoveis(imoveisParaSalvar);
				cout<< endl << "IMOVEIS SALVOS!!" <<endl;

				for(list<Imovel*>::iterator it = imoveisParaSalvar.begin(); it != imoveisParaSalvar.end() ; it++){
					delete *it;
				}
			}
			break;
		} 
    } // Fim While
    cout << "Fim do Programa!!!" << endl;
    return 0;
}