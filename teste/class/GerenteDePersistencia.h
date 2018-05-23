#ifndef GERENTEDEPERSISTENCIA_H
#define GERENTEDEPERSISTENCIA_H
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

		std::list<Imovel*> meusImoveis;
	    std::ifstream arquivoDeEntrada, iCasa, iApartamento, iFlat, iStudio, iTerreno;
		std::ofstream arquivoDeSaida, oCasa, oApartamento, oFlat, oStudio, oTerreno;
		
    
    public:
        GerenteDePersistencia();
        virtual ~GerenteDePersistencia();

        int salvaListaDeImoveis(std::list<Imovel*> salvarMeusImoveis);
        int recuperaListaDeImoveis(void);
        std::list<Imovel*> getListaImoveis(void);


};

#endif