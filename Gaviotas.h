#pragma once
#include "Aves.h"
class Gaviotas : public Aves
{
private:

public:
	Gaviotas();
	~Gaviotas();
	void mostrar();
	void mostrarMuert()
	{
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(x, y); cout << "*~.";
	}

};

Gaviotas::Gaviotas() :Aves(3, 1, 1)
{

}

Gaviotas::~Gaviotas()
{
}

void Gaviotas::mostrar() {
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(x, y); cout << "\\ /";
}