#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	fstream archivo("C:\\Users\\PROGRAMACION\\Desktop\\archivo3.txt", ios::in | ios::out); //cambiar palabra: PROGRAMACION   y crear el archivo3.txt en el escritorio
	if (archivo.is_open()) {
		archivo.seekp(0, ios::end);
		archivo << "linea 1 añadida.\n";
		archivo << "linea 2 añadida.\n";		
		archivo.close(); 
		cout<<"archivo actualizado exitosamente";		
	} else {
		cerr <<"No se pudo abrir el archivo para lectura y escritura." << endl;
	}
	return 0;
}



