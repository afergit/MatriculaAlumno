#ifndef INGRESAR_H
#define INGRESAR_H



void ingresar(string titulo){
	int codigo, pos;
	cout << "\n\tIngresar codigo de " << titulo << "\n\n";

	cout << "Ingrese Codigo: "; cin >> codigo;
	cin.ignore();
	pos = buscar(codigo, titulo);
	if(pos >= 0){
		cout << "Ya existe codigo" << endl;
		return;
	}
	
	if(titulo.compare("Estudiantes") == 0){
		estudiantes[numEstudiantes].codigo = codigo;
		cout << "Ingrese Nombre: "; getline(cin, estudiantes[numEstudiantes].nombre);
		cout << "Ingrese Apellido: "; getline(cin, estudiantes[numEstudiantes].apellido);
		cout << "Ingrese DNI: "; getline(cin, estudiantes[numEstudiantes].dni);
		cout << "Ingrese Genero: "; getline(cin, estudiantes[numEstudiantes].genero);
		cout << "Ingrese Celular: "; getline(cin, estudiantes[numEstudiantes].celular);
		cout << "Ingrese Fecha de nacimiento: "; getline(cin, estudiantes[numEstudiantes].fechaNacimiento);
		cout << "Ingrese Direccion: "; getline(cin, estudiantes[numEstudiantes].direccion);
		
		numEstudiantes++;
	}

	if(titulo.compare("Cursos") == 0){
		cursos[numCursos].codigo = codigo;
		cout << "Ingrese Nombre: "; getline(cin, cursos[numCursos].nombre);
		cout << "Ingrese Creditos: "; cin >> cursos[numCursos].creditos;
		cout << "Ingrese Ciclo: "; cin >> cursos[numCursos].periodo;
		cout << "Ingrese Costo x Credito: "; cin >> cursos[numCursos].costoxcredito;
		cursos[numCursos].costoCurso= cursos[numCursos].creditos * cursos[numCursos].costoxcredito;
		cout << "Precio de Curso: " << cursos[numCursos].costoCurso<< endl;
		numCursos++;
	}
	
	if(titulo.compare("Matriculas") == 0){
	
		matriculas[numMatriculas].codigo = codigo;
		listar("Estudiantes");
		cout << "Ingrese Codigo de Estudiante: "; cin >> codigo;
		pos = buscar(codigo, "Estudiantes");
		if(pos < 0){
			cout << "No existe codigo" << endl;
			return;
		
		}
		matriculas[numMatriculas].estudiante = estudiantes[pos];
		int contador = 0;
		do{
			listar("Cursos");
			cout << "Ingrese Curso [Para terminar ingrese 0]: "; cin >> codigo;
			if(codigo != 0){
				pos = buscar(codigo, "Cursos");
				if(pos < 0){
					cout << "No existe codigo" << endl;
					break;
				}

		}
	

		}
		while(codigo != 0);
}
}

#endif //INGRESAR_H
