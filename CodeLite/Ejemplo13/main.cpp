#include <iostream>
#include "Persona.hpp"
using namespace std;

int main(int argc, char **argv)
{	
	Persona* personas[10];
	int num = 18;
	
	for(int i = 0; i < 10; i++){
		personas[i] = new Persona(num);
		personas[i]->mostrar();
		num++;
	}
	
	return 0;
}
