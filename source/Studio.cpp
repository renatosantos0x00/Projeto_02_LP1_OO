#include <string>
#include "Studio.h"

Studio::Studio() : Imovel(){
    
    tipoDeImovel = TIPO_STUDIO;
	this->areaStudio = 0;
    this->valorCondominio = 0;

	this->arCondicionado = "Nenhum";
	this->internet = "Nenhum";
	this->tvACabo = "Nenhum";
	this->lavanderia = "Nenhum";
	this->limpeza = "Nenhum";
	this->recepcao24 = "Nenhum";
	this->piscina = "Nenhum";
	this->sauna = "Nenhum";
	this->salaDeGinastica = "Nenhum";
}

Studio::Studio(double areaStudio, double valorCondominio, char arCondicionado, char internet, char tvACabo,
		   char lavanderia, char limpeza, char recepcao24, char piscina, char sauna, char salaDeGinastica,
            int tipoDeOferta, double valor, std::string cidade, std::string bairro,std::string logradouro,std::string cep,int numero)
		   : Imovel(tipoDeOferta, valor,  cidade,  bairro, logradouro, cep, numero){


    tipoDeImovel = TIPO_STUDIO;
    this->areaStudio = areaStudio;
    this->valorCondominio = valorCondominio;

    // Parametro � um caractere mas o atributo e uma string
    // Arcondicionado
    if(arCondicionado == 's' || arCondicionado == 'S'){
    	this->arCondicionado = "Sim Possui.";
    }else if(arCondicionado == 'n' || arCondicionado =='N'){
    	this->arCondicionado = "Nao Possui.";
    }else{
    	this->arCondicionado = "Nenhum.";
    }

    //Internet
    if(internet == 's' || internet == 'S'){
    	this->internet = "Sim Possui.";
    }else if(internet == 'n' || internet == 'N'){
    	this->internet = "Nao Possui.";
    }else{
    	this->internet = "Nenhum.";
    }
    // TV a Cabo
    if(tvACabo == 's' || tvACabo == 'S'){
    	this->tvACabo = "Sim Possui.";
    }else if(tvACabo == 'n' || tvACabo == 'N'){
    	this->tvACabo = "Nao Possui.";
    }else{
    	this->tvACabo = "Nenhum.";
    }
    //Lavanderia
    if(lavanderia == 's' || lavanderia == 'S'){
    	this->lavanderia = "Sim Possui.";
    }else if(lavanderia == 'n' || lavanderia == 'N'){
    	this->lavanderia = "Nao Possui.";
    }else{
    	this->lavanderia = "Nenhum.";
    }
    //Limpeza
    if(limpeza == 's' || limpeza == 'S'){
    	this->limpeza = "Sim Possui.";
    }else if(limpeza == 'n' || limpeza == 'N'){
    	this->limpeza = "Nao Possui.";
    }else{
    	this->limpeza = "Nenhum.";
    }
    //Recepi��o 
    if(recepcao24 == 's' || recepcao24 == 'S'){
    	this->recepcao24 = "Sim Possui.";
    }else if(recepcao24 == 'n' || recepcao24 == 'N'){
    	this->recepcao24 = "Nao Possui.";
    }else{
    	this->recepcao24 = "Nenhum.";
    }

    //Piscina 
    if(piscina == 's' || piscina == 'S'){
    	this->piscina = "Sim Possui.";
    }else if(piscina == 'n' || piscina == 'N'){
    	this->piscina = "Nao Possui.";
    }else{
    	this->piscina = "Nenhum.";
    }
	//Sauna 
    if(sauna == 's' || sauna == 'S'){
    	this->sauna = "Sim Possui.";
    }else if(sauna == 'n' || sauna == 'N'){
    	this->sauna = "Nao Possui.";
    }else{
    	this->sauna = "Nenhum.";
    }
    //Sauna 
    if(salaDeGinastica == 's' || salaDeGinastica == 'S'){
    	this->salaDeGinastica = "Sim Possui.";
    }else if(salaDeGinastica == 'n' || salaDeGinastica == 'N'){
    	this->salaDeGinastica = "Nao Possui.";
    }else{
    	this->salaDeGinastica = "Nenhum.";
    }
        
}

Studio::~Studio(){
}

std::string Studio::getDescricao(){

	std::string studio = "STUDIO \n\nArea: " + std::to_string(areaStudio) + 
					"\nValor do condominio: " + std::to_string(valorCondominio) + 
					"\nAr condicionado: " + arCondicionado +  
					"\nInternet: " + internet + 
					"\nTV a cabo: " + tvACabo + 
					"\nLavandaria: " + lavanderia + 
					"\nLimpeza: " + limpeza + 
					"\nRecep��o 24 horas: " + recepcao24+ 
					"\nPiscina: " + piscina + 
					"\nSauna: " + sauna + 
					"\nSala de ginastica: " + salaDeGinastica +
					"\nTipo de oferta: " + tipoDeOferta +
					"\nValor do imovel: " + std::to_string(valor);

	return studio+endereco.getEndereco();

}

int Studio::getTipoDeImovel(void){

    return tipoDeImovel;
}

std::string Studio::getDescricaoCSV(void){
    
    return "__Studio__;_valor_;"+std::to_string(valor)+";_tipoDeOferta_;"+tipoDeOferta+
           ";_areaStudio_;"+std::to_string(areaStudio)+";_valorCondominio_;"+std::to_string(valorCondominio)+
           ";_arCondicionado_;"+arCondicionado+";_internet_;"+internet+";_tvACabo_;"+tvACabo+
           ";_lavanderia_;"+lavanderia+";_limpeza_;"+limpeza+";_recepcao24_;"+recepcao24+
           ";_piscina_;"+piscina+";_sauna_;"+sauna+";_salaDeGinastica_;"+salaDeGinastica+
           ";"+endereco.getEnderecoCSV();
}

void Studio::setDescricaoCSV(std::string *descricao){
    std::string atributo, cep, cid, bai, log;
    int num=0;


    // Atributos de imovel
    atributo = recuperaValorDeCelula(descricao,"_valor_");
    this->valor = std::stod(atributo); 
    this->tipoDeOferta = recuperaValorDeCelula(descricao,"_tipoDeOferta_");

    //Endereco
    atributo = recuperaValorDeCelula(descricao,"_numero_");
    num = std::stoi(atributo);

    cep = recuperaValorDeCelula(descricao,"_cep_");
    cid = recuperaValorDeCelula(descricao,"_cidade_");
    bai = recuperaValorDeCelula(descricao,"_bairro_");
    log = recuperaValorDeCelula(descricao,"_logradouro_");

    endereco = Endereco(cid, bai, log, cep, num);

    //atributos especiais da classe

    atributo = recuperaValorDeCelula(descricao, "_areaStudio_");
    this->areaStudio = std::stod(atributo);
    
    atributo = recuperaValorDeCelula(descricao, "_valorCondominio_");
    this->valorCondominio = std::stod(atributo);

    this->arCondicionado = recuperaValorDeCelula(descricao, "_arCondicionado_");
    this->internet = recuperaValorDeCelula(descricao, "_internet_");
    this->tvACabo = recuperaValorDeCelula(descricao, "_tvACabo_");
    this->lavanderia = recuperaValorDeCelula(descricao, "_lavanderia_");
    this->limpeza = recuperaValorDeCelula(descricao, "_limpeza_");
    this->recepcao24 = recuperaValorDeCelula(descricao, "_recepcao24_");
    this->piscina = recuperaValorDeCelula(descricao, "_piscina_");
    this->sauna = recuperaValorDeCelula(descricao, "_sauna_");
    this->salaDeGinastica = recuperaValorDeCelula(descricao, "_salaDeGinastica_");


}
