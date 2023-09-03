#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

#include "menus.h"
#include "funciones.h"





int main(int argc, char** argv) {
	//inicializar();
	srand(time(NULL));
	int opcion = 0;
	
	do{
		menuPrincipal(); cin >> opcion;
		switch(opcion){
			case 1: operaciones("Estudiantes"); break;
			case 2: operaciones("Cursos"); break;
			case 3: operaciones("Matriculas"); break;
			case 4: reportes(); break;
			case 5: resetear(); break;
			case 6: inicializar();break;
		}
		if(opcion != 7){
			system("pause");
			system("cls");
		}
	}
	while(opcion != 7);
	cout << "Hasta Luego" << endl;
	
	return 0;
 
	
}
