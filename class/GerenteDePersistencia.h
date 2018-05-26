#ifndef GERENTEDEPERSISTENCIA_H
#define GERENTEDEPERSISTENCIA_H
#include <iostream>
#include <fstream>
#include <list>

#include "SistemaImobiliaria.h"
#include "Imovel.h"

class GerenteDePersistencia {
    private:

	    std::ifstream arquivoDeEntrada;
		std::ofstream arquivoDeSaida; 
		
    
    public:
        GerenteDePersistencia();
        virtual ~GerenteDePersistencia();

        int salvaListaDeImoveis(std::list<Imovel*> salvarMeusImoveis);
        std::list<Imovel*> recuperaListaDeImoveis(void);

};

#endif