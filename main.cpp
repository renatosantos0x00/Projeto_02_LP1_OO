#include <iostream>
#include "class/Apartamento.h"
#include "class/Terreno.h"

int main(int argc, char const *argv[])
{
	Apartamento apartamento1;
	Terreno t;

	std::cout << t.getDescricao() << std::endl;
    
    return 0;
}
