#include <iostream>
#include <string>
#include "PC.hpp"
#include "Red.hpp"
using namespace std;

int menu() {
	int opcion;
	cout << "1. agregar PC" << endl;
	cout << "2. ingresar PC" << endl;
	cout << "3. Salir" << endl;
	cout << "Ingrese su opcion: ";
	cin >> opcion;
	cout << endl;
	return opcion;

}

int main() {
	int opcion;
	int pos;
	Red* r = new Red;
	while ((opcion = menu()) != 3) {

		switch (opcion) {
			case 1: {
				string IP;
				string mask;
				string host;
				cout << "Ingrese la direccion IP: ";
				getline(cin, IP);
				getline(cin, IP);

				cout << "Ingrese la mascara: ";
				
				getline(cin, mask);
				
				cout << "Ingrese el nombre del host: ";
				
				getline(cin, host);
				
				r->agregarPC(new PC(host, IP, mask));
				break;
			}
			case 2: {
				r->funcion();
				cout << endl;
				break;
			}
			case 3: {
				cout << "Adios";
				break;
			}
		}

	}
	delete r;
	return 0;
}