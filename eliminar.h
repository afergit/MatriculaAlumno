#ifndef ELIMINAR_H
#define ELIMINAR_H

void eliminar(string titulo){
	int codigo, pos;
	
	cout << "Eliminar codigo: "; cin >> codigo;
	pos = buscar(codigo, titulo);
	
	if(pos < 0){
		cout << "No existe codigo" << endl;
		return;
	}
	
	if(titulo.compare("Estudiantes") == 0){
		for(int i = pos; i < numEstudiantes; i++){
			estudiantes[i] = estudiantes[i+1];
		}
		numEstudiantes--;
	}
	
	if(titulo.compare("Cursos") == 0){
		for(int i = pos; i < numCursos; i++){
			cursos[i] = cursos[i+1];
		}
		numCursos--;
	}
	
	if(titulo.compare("Matriculas") == 0){
		for(int i = pos; i < numMatriculas; i++){
			matriculas[i] = matriculas[i+1];
		}
		numMatriculas--;
	}
	
	cout << codigo << " eliminado" << endl;
}


#endif // ELIMINAR_H
