#ifndef GERENTEDEPERSISTENCIA_H
#define GERENTEDEPERSISTENCIA_H
#include <iostream>
#include <fstream>
#include <list>

#include "SistemaImobiliaria.h"
#include "Imovel.h"

#include "Casa.h"
#include "Apartamento.h"
#include "Flat.h"
#include "Studio.h"
#include "Terreno.h"


class GerenteDePersistencia {
    private:
	    std::ifstream arquivoDeEntrada, iCasa, iApartamento, iFlat, iStudio, iTerreno;
		std::ofstream arquivoDeSaida, oCasa, oApartamento, oFlat, oStudio, oTerreno;
		
    
    public:
        GerenteDePersistencia();
        virtual ~GerenteDePersistencia();

        int salvaListaDeImoveis(std::list<Imovel*> salvarMeusImoveis);
        std::list<Imovel*> recuperaListaDeImoveis(void);

};

#endif