#include <iostream>

#include "Endereco.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Flat.h"

int main(int argc, char const *argv[])
{
	Endereco e;

	Flat t=Flat(12, 3, 's', 's', 'n','r', 'n', 's', 2, 2222.000, e);

	std::cout << t.getDescricao() << std::endl;
    
    return 0;
}
