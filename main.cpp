#include <iostream>
#include "Casa.h"

int main(int argc, char const *argv[])
{
	Casa casinha = Casa();

	std::cout<<casinha.getDescricao()<<std::endl;

    return 0;
}
