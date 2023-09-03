#ifndef FUNCIONES4_H
#define FUNCIONES4_H

#include "buscar.h"
void listar1(string titulo){
			int codigo, pos;
	if(titulo.compare("Matriculas") == 0){
		cout << "Ingrese codigo: "; cin >> codigo;
		pos = buscar(codigo, titulo);
		if(pos < 0){
			cout << "Codigo no existe" << endl;
			return;
		}
		cout << "Datos de " << titulo << "\n\n";
		cout << "Codigo de Matricula: " << matriculas[pos].codigo << endl;
		cout << "Estudiante: " << matriculas[pos].estudiante.nombre << " " << matriculas[pos].estudiante.apellido << endl;
		cout << "DNI: " << matriculas[pos].estudiante.dni << endl;
		cout << "Celular: " << matriculas[pos].estudiante.celular << endl;
		cout << "Fecha: " << matriculas[pos].fecha <<"\n\n";
		
		cout << "Codigo\tNombre\t\tCREDITOS\tCICLO\n";

			cout << matriculas[pos].curso.codigo << "\t"
				 << matriculas[pos].curso.nombre << "\t"
				 << matriculas[pos].curso.creditos<< "\t\t"
				 << matriculas[pos].curso.periodo << "\n";
				matriculas[pos].total += matriculas[pos].curso.creditos; 
			cout<< "\tTotal: \t\t" << matriculas[pos].total << "\n\n";

	
		}	
}
void listar(string titulo){
	if(titulo.compare("Estudiantes") == 0){
		cout << "Num\tNOMBRE\tAPELLIDO\tDNI\t\tcelular\t\tGENERO\t\tFECHA DE NACIMIENTO\tDIRECCION\n";
		for(int i=0; i < numEstudiantes; i++){
			cout << estudiantes[i].codigo << "\t"
				 << estudiantes[i].nombre << "\t"
				 << estudiantes[i].apellido << "\t\t"
				 << estudiantes[i].dni << "\t"
				 << estudiantes[i].celular << "\t"
				 << estudiantes[i].genero << "\t"
				 << estudiantes[i].fechaNacimiento << "\t\t"
				 << estudiantes[i].direccion << "\n\n";
		}
	}
	
	if(titulo.compare("Cursos") == 0){
		cout << "CODIGO\t\tNOMBRE\t\tCREDITOS\t\tPERIODO\t\tCOSTO X CREDITO\t\tCOSTO CURSO\n";
		for(int i=0; i < numCursos; i++){
				cout << cursos[i].codigo << "\t\t"
					 << cursos[i].nombre << "\t\t"
					 << cursos[i].creditos << "\t\t"
					 << cursos[i].periodo << "\t\t"
					 << cursos[i].costoxcredito << "\t\t\t"
					 << cursos[i].costoCurso << "\n";
		}
	}
	if(titulo.compare("Matriculas") == 0){
		cout <<"CODIGO\tNOMBRE\tAPELLIDO\tDNI\t\tFECHA\n";
		for(int i = 0; i<numMatriculas; i++){
			cout<<matriculas[i].codigo << "\t"
				<<matriculas[i].estudiante.nombre <<"\t"
				<<matriculas[i].estudiante.apellido << "\t\t"
				<< matriculas[i].estudiante.dni << "\t"
				<< matriculas[i].fecha << "\n";

}
				listar1(titulo);

		}
	
}



#endif //FUNCIONES4_H
