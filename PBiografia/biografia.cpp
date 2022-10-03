#include <iostream>

using namespace std;
int sl;
int main() {
	do
	{
		cout << "Mi nombre es Rayner Caba Condori, nací en la ciudad de Potosí, desde mi niñez viví en el pueblo de Tupiza, ubicado en los interiores de Potosí.\nEstudié en el Colegio Suipacha de Tupiza , realice el Servicio Militar en el Regimiento de Caballeria 7 Chichas.\nActualmente me encuentro estudiando en la Universidad Mayor Real y Pontificia de San Francisco Xavier de Chuquisaca la carrera de Ingenieria en Sistemas" << endl;
		cout << "1.Volver a Imprimir Biografia.\n2.Salir del Pograma." << endl;
		cin >> sl;
		while ((sl != 1) && (sl != 2))
		{
			cout << "Solo puede ingresar una de las dos opciones." << endl;
			cout << "1.Volver a Imprimir Biografia.\n2.Salir del Pograma." << endl;
			cin >> sl;
		}
	} while (sl == 1);
	return 0;
}