#ifndef REPORTES_H
#define REPORTES_H

void ListadeEstudiantesxCurso(){
	int codigo, pos;
	listar("Estudiantes");
	cout << "Ingrese codigo: "; cin >> codigo;
	pos = buscar(codigo, "Estudiantes");
	if(pos < 0){
		cout << "Codigo no existe" << endl;
		return;
	}
	cout << "MATRICULA\tCODIGO\tESTUDIANTE\t\tCURSO\t\tCREDITOS\tPERIODO\n";
	for(int i=0; i < numMatriculas; i++){
		if(matriculas[i].estudiante.codigo == codigo){
			cout << matriculas[i].codigo << "\t\t"
				 << matriculas[i].estudiante.codigo << "\t"
				 << matriculas[i].estudiante.nombre << "  " << matriculas[i].estudiante.apellido << "\t\t"
				 << matriculas[i].curso.nombre << "\t"
				 << matriculas[i].curso.creditos << "\t\t"
				 << matriculas[i].curso.periodo << "\n";
		}
	}
}


void ListadeEstudiantesxGenero(){
    cout << "CODIGO\tNOMBRE\tGENERO\n";
    for (int i = 0; i < numEstudiantes; i++) {
        if (estudiantes[i].genero == "Masculino" || estudiantes[i].genero == "MASCULINO" || estudiantes[i].genero == "masculino") {
            cout << estudiantes[i].codigo << "\t"
                << estudiantes[i].nombre << "\t"
                << estudiantes[i].genero << "\n";
        }
    }

    for (int i = 0; i < numEstudiantes; i++) {
        if (estudiantes[i].genero != "Masculino" && estudiantes[i].genero != "MASCULINO" && estudiantes[i].genero != "masculino") {
            cout << estudiantes[i].codigo << "\t"
                << estudiantes[i].nombre << "\t"
                << estudiantes[i].genero << "\n";
        }
    }
}
void ListadeCursosxPeriodo(){

cout << "CODIGO\tNOMBRE\t\tPERIODO\n";
for (int i = 0; i < numCursos; i++) {
	if (cursos[i].periodo == "1") {
    cout << cursos[i].codigo << "\t"
         << cursos[i].nombre << "\t\t"
         << cursos[i].periodo << "\n\n";
     }
}

cout << "CODIGO\tNOMBRE\t\tPERIODO\n";
for (int i = 0; i < numCursos; i++) {
	if (cursos[i].periodo != "1" && cursos[i].periodo == "2") {
    cout << cursos[i].codigo << "\t"
         << cursos[i].nombre << "\t\t"
         << cursos[i].periodo << "\n";
     }
}
cout << "CODIGO\tNOMBRE\t\tPERIODO\n";
for (int i = 0; i < numCursos; i++) {
	if (cursos[i].periodo != "1" && cursos[i].periodo != "2" && cursos[i].periodo == "3") {
    cout << cursos[i].codigo << "\t"
         << cursos[i].nombre << "\t\t"
         << cursos[i].periodo << "\n";
     }
}
}
void ListadeCursosxCredito(){
	cout << "CODIGO\tNOMBRE\t\tCREDITOS\n";
for (int i = 0; i < numCursos; i++) {
	if (cursos[i].creditos == 3 ) {
    cout << cursos[i].codigo << "\t"
         << cursos[i].nombre << "\t\t"
         << cursos[i].creditos << "\n\n";
     }
}

	cout << "CODIGO\tNOMBRE\t\tCREDITOS\n";
for (int i = 0; i < numCursos; i++) {
	if (cursos[i].creditos == 4 ) {
    cout << cursos[i].codigo << "\t"
         << cursos[i].nombre << "\t\t"
         << cursos[i].creditos << "\n\n";
     }
}
	cout << "CODIGO\tNOMBRE\t\tCREDITOS\n";
for (int i = 0; i < numCursos; i++) {
	if (cursos[i].creditos == 5 ) {
    cout << cursos[i].codigo << "\t"
         << cursos[i].nombre << "\t\t"
         << cursos[i].creditos << "\n\n";
     }
}

	
}	


#endif // REPORTES_H
