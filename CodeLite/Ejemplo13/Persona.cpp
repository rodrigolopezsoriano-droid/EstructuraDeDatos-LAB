#include "Persona.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

Persona::Persona(int edad)
{
	this->edad = edad;
	
	genero = rand() % 2;
	
	for(int i = 0; i < 8; i++) {
		dni[i] = '0' + (rand() % 10);
	}
	dni[8] = 'A' + (rand() % 26);
	dni[9] = '\0';
}

Persona::~Persona()
{
	
}

int Persona::getEdad()
{
	return edad;
}

bool Persona::esMujer()
{
	return genero;
}

void Persona::mostrar()
{
	cout << "Edad " << edad << " anyos" << endl;
	
	if (genero == true) {
		cout << "Genero: Mujer" << endl;
	} else {
		cout << "Genero: Hombre" << endl;
	}
	
	cout << "DNI: " << dni << endl;
}