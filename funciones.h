#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "estructuras.h"
#include "listar.h"
#include "buscar.h"
#include "ingresar.h"
#include "eliminar.h"
#include "editar.h"
#include "reportes.h"
#include "mostrar.h"
#include "datos.h"



void operaciones(string titulo){
	int opcion = 0;
	
	do{
		system("cls");
		menuOperaciones(titulo); cin >> opcion;
		switch(opcion){
			case 1: ingresar(titulo); break;
			case 2: editar(titulo); break;
			case 3: eliminar(titulo); break;
			case 4: listar(titulo); break;
		}
		if(opcion != 5){
			system("pause");
		}
	}
	while(opcion != 5);
}



void reportes(){
	int opcion = 0;
	
	do{
		system("cls");
		menuReportes(); cin >> opcion;
		switch(opcion){
			case 1: ListadeEstudiantesxCurso(); break;
			case 2: ListadeEstudiantesxGenero(); break;
			case 3: ListadeCursosxPeriodo(); break;
			case 4: ListadeCursosxCredito(); break;
		}
		if(opcion != 5){
			system("pause");
		}
	}
	while(opcion != 5);
}

#endif // FUNCIONES_H
